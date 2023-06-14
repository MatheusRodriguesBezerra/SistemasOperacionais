#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int i = 1;
    while (i>0){
        FILE* file = fopen(argv[i], "r");
        if ( file == NULL ) {
            break;
        }
        char myString[10000];
        fgets(myString, 100, file);
        printf("%s\n", myString);
        fclose(file);
        i = i + 1;
    }
    return 0;
}
