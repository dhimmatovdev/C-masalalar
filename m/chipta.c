#include <stdio.h>

int main() {
    int yosh;

    printf("Yoshingiz nechida:  ");
    scanf("%d", &yosh);

    if (yosh < 6) {
        printf("Sizga kirish bepul\n");
    } else if (yosh > 6) {
        printf("Sizga kirish 10000 so'm\n ");
    } else if (yosh > 19) {
        printf("Sizga kirish 20000 so'm\n ");
    } else {
        printf("Sizga kirsh 8000 so'm\n ");
    }
    return 0;
 }