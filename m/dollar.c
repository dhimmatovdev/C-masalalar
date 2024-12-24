#include <stdio.h>

int main() {
    float miqdor;
    int tanlov;
    const float valyuta = 12800;

    printf("1 - dollarni sumga aylantirish. ");
    printf("2 - sumni dollarga aylantirish. ");
    scanf("%d", &tanlov);

    if (tanlov == 1) {
        printf("Dollar miqdorini kiriting: ");
        scanf("%f", &miqdor);
        printf("%.2f dollar = %.2f so'm\n", miqdor, miqdor * valyuta);

    } else if (tanlov == 2) {
        printf("Miqdorni kirting: ");
        scanf("%f", &miqdor);
        printf("%.2f so'm %.2f\n", miqdor, miqdor / valyuta );
    } else {
        printf("Noto'g'ri tanlov tanladingiz, 1 yoki 2 ni tanlang!\n");
    }
    

    return 0;
}