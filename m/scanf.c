#include <stdio.h>

int main() {

    char Salomberish[20];
    printf("Salom ber!\n");
    //scanf("%s", Salomberish);
   // fgets(Salomberish, 20, stdin);
    scanf("%[^\n]%*c", Salomberish);
    printf("%s\n", Salomberish);

    return 0;
}