#include <stdio.h>

struct alumno {
    char c;
    int i;
}typedef alumno_t;

int main(void) {
    int suma = sizeof(char) + sizeof(int);
    int real = sizeof(alumno_t);
    printf("sizeof()​ de una struct de C es %d \n", real);
    printf("la suma del sizeof() ​ de cada uno sus elementos es %d \n", suma);
    return 0;
}
