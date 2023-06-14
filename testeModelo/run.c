#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

#define MAXSIZE 32

int i;

void get_args(char* command, char** args){
    char* p;
    i = 0;
    while ((p = strsep(&command, " ")) != NULL){
        args[i++] = strdup(p);
    }
    args[i] = NULL;
    return;
    
}

int main(int argc, char* argv[]) {
    pid_t pid;
    char* args[32];
    get_args(argv[1],args);
    /* fork a child process */
    if ((pid = fork()) == -1) {
        perror("fork");
        return EXIT_FAILURE;
    } else if (pid == 0) {
        /* child process */
        if (execvp(args[0],args) == -1) {
            perror("execvp");
            return EXIT_FAILURE;
        }
    } else {
        /* parent process */
        if (waitpid(pid, NULL, 0) == -1) {
            perror("waitpid");
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}