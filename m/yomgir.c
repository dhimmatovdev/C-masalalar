#include <stdio.h>

int main() {
    int yomgir, sovuq;

    printf("Yomg'ir yog'ayaptimi? (Ha -1 yoki Yo'q -1 )  ");
    scanf("%d", &yomgir);

    printf("Havo sovuqmi? (Ha -1 yoki Yo'q)  ");
    scanf("%d", &sovuq);
    if (yomgir && sovuq) {
        printf("Issiq kiyim oling va soyabon oling!\n");
    } else if (yomgir) {
        printf("Soyabon oling!");
    } else if (sovuq) {
        printf("Issiq kiyinib oling!");
    } else {
        printf("Havo yaxshi bemalol chiqavering!\n");
    }
    return 0;
}