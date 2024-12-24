#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int max_3gakarralison = N -(N%3);
    printf("%d\n", max_3gakarralison);
    return 0;
}