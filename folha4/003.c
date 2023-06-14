#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    struct stat info;
    for (int i = 1; i < argc; i++){
        if (stat(argv[i], &info) == -1) {
            fprintf(stderr, "fsize: Can't stat %s\n", argv[1]);
        }else{
            printf("%s:\n\tsize: %d bytes,\n\tdisk_blocks: %d,\n\tultima modificação: %ld,\n\tdono: %d\n",
                argv[i], (int)info.st_size, (int)info.st_blocks, info.st_ctime, (int)info.st_ino);
        }
    }
    
    return EXIT_SUCCESS;
}
