#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_SIZE 64

int main(int argc, char* argv[]) {
    FILE *fptr;
    char myString[MAX_STR_SIZE];
    char msg[MAX_STR_SIZE];
    int i = 0;

    if (argv[1] == "-u"){   // toUpper
        fptr = fopen(argv[2], "r");
        fgets(myString, 100, fptr);
        while (myString[i] ){
            
        }
        
        

        
    }else if (argv[1] == "-l"){
        /* code */
    }else{

    }
    
    
    
    return EXIT_SUCCESS;
}