// Write a C program that creates a thread which infinitely prints the message "feed me input!\n" 
// once per second (sleep), while the main (default) thread continuously reads in lines of input, 
// and prints those lines back out to stdout with the prefix: "you entered: ".

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *thread_run(void *data) {
    while (1) {
        printf("feed me input!\n");
        sleep(1);
    }
    return NULL;
}

int main(void) {
    pthread_t thread;
    pthread_create(
        &thread,    // the pthread_t handle that will represent this thread
        NULL,       // thread-attributes -- we usually just leave this NULL
        thread_run, // the function that the thread should start executing
        NULL        // data we want to pass to the thread -- this will be
                    // given in the `void *data` argument above
    );

    while (1) {
        char line[1048];
        fgets(line, 1048, stdin);
        printf("you entered: %s", line);
    }
    return 0;
}