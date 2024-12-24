#include <stdio.h>

int main() {
    int yosh;
    scanf("%d", &yosh); // qiymatni  kiritishini so'raydi
    if (yosh>10) {
        printf("%d\n", yosh+3);
    } else if (yosh<10) {
        printf("%d\n", yosh*2);
    } else {
        printf("22\n");
    }
   
    return 0;
}