#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_SIZE 64

int main(int argc, char* argv[]) {
    FILE *fptr;
    fptr = fopen( "mycat.txt" , "w" );
    fwrite(argv[1], 1, strlen(argv[1]), fptr);
    fclose(fptr);
    
    return EXIT_SUCCESS;
}