#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];

    scanf("%99s", str1);
    scanf("%99s", str2);
    if (strcmp(str1, str2)==0) {
        printf("Ular bir xil\n");
    } else {
        printf("stringlar o'xshash emas\n");
    }
    // char str[]="Dasturlash";
    // char str1[]="Dasturlash1";

    // if (sizeof(str)==sizeof(str1)) {
    //     printf("true\n");
    // } else {
    //     printf("false\n");
    // }

    return 0;
}
