#include <stdio.h>
#include <string.h>

int main() {
    char ism[50], lavozim[50];
    int yosh;
    int maosh = 0;

    // Foydalanuvchidan ma'lumotlarini kiritish
    printf("Ismingizni kiriting: ");
    scanf("%s", ism);

    printf("Yoshingizni kiriting: ");
    scanf("%d", &yosh);

    printf("Lavozimingizni kiriting: ");
    scanf("%s", lavozim);

    //Yoshlarga asoslangan maosh belgilash
    if (yosh >= 18 && yosh <= 30) {
        maosh = 2000000;
        
    } else if (yosh >= 31 && yosh <= 50) {
        maosh = 4000000;
    } else {
        printf("Bunday yosh yo'q! \n");
        return 1;   
    }
   
    if (strcmp(lavozim, "menedjer") == 0) {
        maosh += 1000000;
    }
    printf("%s, yoshingiz %d, lavozimingiz %s. Umumiy maoshingiz: %d so'm\n", ism, yosh, lavozim, maosh);
    
    return 0;
}