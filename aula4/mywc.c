#include <stdio.h>

#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    FILE* file = fopen(argv[2], "r");
    char myString[10000];
    fgets(myString, 100, file);
    if (strcmp(argv[1],"-c") == 0){
        int i = 0;
        while(myString[i] != '\0'){
            i = i + 1;
        }
        printf("%d", i);
    }
    else if (strcmp(argv[1],"-w") == 0){
        int count = 0;
        int i = 0;
        while(myString[i] != '\0'){
            if (myString[i] == ' ' || myString[i] == '\n'){
                count = count +1;
            } 
            i = i + 1;
        }
        printf("%d", count+1);
    }
    else if (strcmp(argv[1],"-l") == 0){
        int count = 0;
        int i = 0;
        while(myString[i] != '\0'){
            if (myString[i] == '\n'){
                count = count +1;
            } 
            i = i + 1;
        }
        printf("%d", count+1);
    }
    fclose(file);
    return 0;
}