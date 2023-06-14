#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char * argv[]){
    mode_t newperms = S_IRUSR | S_IWUSR | S_IROTH | S_IRGRP;
    if(argc != 2){
        printf("usage: cat filename\n");
        return EXIT_FAILURE;
    }
    open(argv[1], O_CREAT);
    chmod(argv[1],newperms);

    return EXIT_SUCCESS;
}