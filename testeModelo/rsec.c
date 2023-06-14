#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAXRAND 1000

int main(int argc, char* argv[]){
    if(argv[1][1] == 'r'){
        int value;
        while(fread(&value, sizeof(int), 1, stdin) > 0){
            printf("%d\n", value);
        }        
    } else if(argv[1][1] == 'w'){
        int n = atoi(argv[2]);
        srandom(getpid());
        for (int i = 0; i < n; i++){
            int value = random() % MAXRAND;
            fwrite(&value, sizeof(int), 1, stdout);
        }       
    }else{
        exit(EXIT_FAILURE);
    }
    
    exit(EXIT_SUCCESS);
}