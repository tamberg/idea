// licensed under https://tamberg.mit-license.org/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>

int count_lines(int fd) {
    off_t pos = lseek(fd, 0, SEEK_CUR);    
    assert(pos == 0);
    int n = 0;
    char buf[1];
    int r = read(fd, buf, 1);
    while (r > 0) {
        if (buf[0] == '\n') {
            n++;
        }
        r = read(fd, buf, 1);
    }
    return n;
}

void print_line(int fd, int i) {
    off_t pos = lseek(fd, 0, SEEK_CUR);
    assert(pos == 0);
    char buf[1];
    int r = read(fd, buf, 1);
    while (r > 0 && i > 0) {
        if (buf[0] == '\n') {
            i--;
        }
        r = read(fd, buf, 1);
    }
    assert(r > 0 && i == 0);
    while (r > 0 && (buf[0] != '\n')) {
        write(STDOUT_FILENO, buf, 1);
        r = read(fd, buf, 1);
    }
    write(STDOUT_FILENO, "\n", 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("usage: %s file-1 file-2 ... file-n\n", argv[0]);
        return 1;
    }
#if __APPLE__
    srandom(getpid());
#else
    srand(getpid());
#endif
    for (int n = 1; n < argc; n++) {
        int fd = open(argv[n], O_RDONLY);
        if (fd == -1) {
            perror("open");
            return 1;
        }
        int c = count_lines(fd);
#if __APPLE__
        int i = random() %c;
#else
        int i = rand() % c;
#endif
        lseek(fd, 0, SEEK_SET);
        print_line(fd, i);
    }
    printf("\n");
    return 0;
}
