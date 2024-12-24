#include <stdio.h>

int main() 
{
    int temperatura;
    printf("Temperaturani kiriting: ");
    scanf("%d", &temperatura);

    if (temperatura > 30) {
        printf("Havo issiq. Konditsiyonerni yoqing!\n");
    } else {
        printf("Havo yaxshi. Konditsiyonerni yoqmasak ham bo'ladi\n");
    }

    return 0;
} 