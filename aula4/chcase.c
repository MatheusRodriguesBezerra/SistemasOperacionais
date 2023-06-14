#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE* file = fopen(argv[2], "r");
    char myString[10000];
    fgets(myString, 100, file);
    char newStr[1000];
    int i = 0;
    if (strcmp(argv[1],"-l") == 0){
        while(myString[i] != '\0'){
            newStr[i] = tolower(myString[i]);
            i = i + 1;
        }
    }else if(strcmp(argv[1],"-u") == 0){
        while(myString[i] != '\0'){
            newStr[i] = toupper(myString[i]);
            i = i + 1;
        }
    }
    printf("%s", newStr);
    fclose(file);
    return 0;
}