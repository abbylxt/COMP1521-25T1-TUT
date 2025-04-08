#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_LENGTH 8192

void search_file(FILE *file, char *needle) {
    char line[MAX_LENGTH];
    char line_no = 0;
    while (fgets(line, MAX_LENGTH, file) != NULL) {
        if (strstr(line, needle) != NULL) {
            fputc(line_no, stdout);
            fputs(line, stdout);
        }
        line_no++;
    }
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        return 0;
    }
    if (argc == 2) {
        // search for argv[1] in standand input
        search_file(stdin, argv[1]);
        return 0;
    }
    if (argc >= 3) {
        // search for argv[1] in the following files
        // printf("hi\n");
        for(int i = 2; argc > i; i++) {
            // printf("%s opening\n", argv[i]);
            FILE *input = fopen(argv[i], "r");
            if (input == NULL) {
                perror("");
                fclose(input);
                exit(1);
            }
            search_file(input, argv[1]);
            fclose(input);
        }
    }
    return 0;
}