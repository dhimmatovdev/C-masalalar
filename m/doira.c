#include <stdio.h>

int main() {
    const float Pi = 3.14;
    float raduis;

    printf("Doiraning raduisini kiriting: ");
    scanf("%f", &raduis);
    float natija = Pi * raduis * raduis;
    printf("Doiraning yuzi %.2f ga teng\n", natija);

    return 0;
}