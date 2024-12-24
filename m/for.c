#include <stdio.h>

int main() {
    int sum = 0, num, i;

    for (int i = 0; i < 10; i++) {
        printf("Sonni kiriting: ");
        scanf("%d", &num);
        sum += num; // Har bir sonni yig'indi bilab qo'shib boradi
    }
    printf("Yig'indi: %d\n ", sum);

    return 0;
 }