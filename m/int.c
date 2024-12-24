#include <stdio.h>

int main() {
    // int a = 3;
    // int b = 4; 
    // int natija = a*b;
    // printf("%d\n", natija);
    int n = 5;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
    factorial *= i;
}
    printf("Faktorial: %d\n", factorial);
    return 0;
}