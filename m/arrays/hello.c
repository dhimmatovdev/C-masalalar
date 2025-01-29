#include <stdio.h>

int  sayhello(int a, int d) {
    printf("Salom jon\n");
    return a + d;
}

void mmmmm(int *a, int size);

int main() {
    // int f = 9;
    // int g = 4;
    // printf("%d\n", sayhello(21,21));
    int b[] = {1,24,5,5};
    int lenght = sizeof(b) / sizeof(b[0]);
    mmmmm(b, lenght);

    return 0;
}

void mmmmm(int *a, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }
}