#include <stdio.h>
#include <string.h>

int main() {
    //stringni uzunligini hisoblaydi:
    char str[]="Salom, C!";

    //stringni nusxalaydi:
    char src[]="Salom";
    char dest[20];
    strcpy(dest, src);

    // stringlarni birlashtiradi:
    char str1[20]="Assalomu ";
    char str2[]="alaykum";
    strcat(str1, str2);

    //stringlarni taqqoslaydi:
    char str3[]="Salom";
    char str4[]="Salom";
    if (strcmp(str3, str4)==0) {
        printf("Stringlar teng.\n");
    } else {
        printf("Stringlar teng emas.\n");
    }
    printf("Stringning uzunligi: %zu\n", strlen(str));
    printf("Stringni nusxalaydi: %s\n", dest);
    printf("Natija: %s\n", str1);
    return 0;
}