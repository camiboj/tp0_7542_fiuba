#include <stdio.h>

int main(int argc, char *argv[]) {
    int cookie = 0;
    char buf[10];
    printf("buf: %08x cookie: %08x\n", buf, &cookie);
    gets(buf);
    if (cookie == 0x41424344) {
        printf("You win!\n");
    }
    return 0;
} 
