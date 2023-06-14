#include <stdio.h>

int main (int argc, char* argv[]) {
    printf("# de argumentos = %d\n", argc - 1);
    printf("os argumentos do comando %s s~ao:\n", argv[0]);
    for (int i = 1; i < argc ; i++)
        printf("argv[%d]=%s\n", i, argv[i]);
    return 0;
}