#include <stdio.h>

int tanlov;

int main() {
printf("Matnli sarguzasht o'yiniga xush kelibsiz!\n");
printf("Siz sirli o'rmonda sayohat qilayabsiz! \n");
printf("Oldinda ikkita yo'l bor O'ng va Chap");
printf("Chap - 1 va O'ng uchun - 2 ");
scanf("%d", &tanlov);

switch (tanlov) {
    case 1:
      printf("Siz chapga yurdingiz va bir daryo oldiga keldingiz.\n");
      printf("1-Ko'prikdan o'tish, 2-Suvdan o'tish");
      printf("Tanlovingiz 1 yoki 2");
      scanf("%d", &tanlov);

      if (tanlov == 1) {
        printf("Ko'prikdan o'tdingiz va o'yindda yutdingiz.\n");
      } else if (tanlov == 2)
      {
        printf("Suvga tushib ketdingiz va yutqazdingiz.\n");
      } else {
        printf("Noto'g'ri tanlov. O'yin tugadi.\n");
      }
      break;
    
        case 2:
            printf("Siz o‘ng tomonga yurdingiz va oldingizda katta g‘or bor.  \n");
            printf("1 - G‘orga kirish, 2 - Yo‘lingizda davom etish:   \n");
            printf("Tanlovingiz (1 yoki 2):   ");
            scanf("%d", &tanlov);
            if (tanlov == 1) {
                printf("G‘orda siz yashirin xazina topdingiz! Tabriklaymiz, o‘yin yutildi!\n");
            } else if (tanlov == 2) {
                printf("Siz yo‘lingizda davom etdingiz va yo‘qolib qoldingiz. O‘yin tugadi.\n");
            } else {
                printf("Noto‘g‘ri tanlov! O‘yin tugadi.\n");
            }
            break;
         default:
            printf("Noto‘g‘ri tanlov! O‘yin tugadi.\n");
    }

    return 0;
}

