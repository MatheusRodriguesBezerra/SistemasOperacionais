#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    for (int i = 0; i < 4; i++){
        fork();
        pid_t pd = getpid();
        printf("%d\n", pd);
    }
    return EXIT_SUCCESS;
}