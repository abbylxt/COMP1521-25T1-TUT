// prints out contents of $HOME/.diary

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *filename = ".diary";

int main(void) {
    // Create path $HOME/.diary

    // Get the environment variable for home
    char *home_path = getenv("HOME");

    if (home_path == NULL) {
        home_path = ".";
    }

    int l_home = strlen(home_path);

    int l_diary = strlen(filename);

    int l_full = l_home + l_diary + 2;

    char *full_path = malloc(sizeof(char) * l_full);

    snprintf(full_path, l_full, "%s/%s", home_path, filename);

    FILE *in = fopen(full_path, "r");
    if (in == NULL) {
        perror("File opening error");
        exit(1);
    }


    char *line;

    while (fgets(line, 1024, in) != NULL) {
        fputs(line, stdout);
    }

    fclose(in);

    return 0;
 
}