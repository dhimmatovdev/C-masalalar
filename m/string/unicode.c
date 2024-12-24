#include <stdio.h>

int main() {
    char str[]="Dasturlash";
    int index;
    scanf("%d", &index);
    
    if (index>= 0 && index < sizeof(str)-1) {
        printf("str[%d]=%c -> Unicode kodi: %d\n", index, str[index], str[index]);
    } else {
        printf("Index noto'g'ri  kiritildi.\n q");
    }

    return 0;
}