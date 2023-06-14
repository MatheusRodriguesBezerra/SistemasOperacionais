#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char* argv[]) {
    /* fork a child process */
    fork();
    /* fork another child process */
    fork();
    /* and fork another */
    fork();
    pid_t pd = getpid();
    printf("%d\n", pd);
    return EXIT_SUCCESS;
}