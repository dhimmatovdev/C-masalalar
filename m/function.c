#include <stdio.h>

int main() {
    char a;

    printf("Ismingizni bosh harfini kiriting: ");
    scanf("%s", &a);

    for (int i = 0; i <= 5; i++) {
        printf("h");
    }

    printf("%d\n", a);

    return 0;
}