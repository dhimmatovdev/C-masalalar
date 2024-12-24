#include <stdio.h>

int main () {
    int boshlagich, oxirgi;

    printf("Dastlabki raqamni kirting: ");
    scanf("%d", &boshlagich);

    printf("Oxirgi raqamni kiriting: ");
    scanf("%d", &oxirgi);

    for (int i = boshlagich; i <= oxirgi; i++) {
        printf("%d ", i);
    } {
        printf("\n ");
    }
    return 0;
}