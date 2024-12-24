#include <stdio.h>

int main() {
    float summa;
    
    printf("Summani kiriiting: ");
    scanf("%f", &summa);

    if (summa > 1000) 
    {
        printf("Sizga 5 %% foiz chegirma bilan: %.2f sum\n", summa - (summa * 5 / 100));
        
    } else if (summa > 500)
    {
         printf("Sizga 3 %% chegirma bilan : %.2f so'm \n", summa - (summa * 3 / 100));
    } else {
        printf("Bu narxga chegirma yo'q\n");
    }
    return 0;
}