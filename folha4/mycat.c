#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>

#define BUFFER_SIZE 1024

int main(int argc, char* argv[]) {
  /* check if exactly one argument is present */
  if (argc < 2) {
    printf("usage: cat filename\n");
    return EXIT_FAILURE;
  }
  /* check if file can be opened and is readable */
  for (int i = 1; i < argc; i++){
    int fd = open(argv[i], O_RDONLY);
    if (fd == -1) {
      printf("error: cannot open %s\n", argv[1]);
      return EXIT_FAILURE;
    }
    char buffer[BUFFER_SIZE];
    int bytesin;
    while ((bytesin = read(fd, buffer, BUFFER_SIZE)) > 0) {
      write(1, buffer, bytesin);
    }
    close(fd);
  }
  return EXIT_SUCCESS;
}
