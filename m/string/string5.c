#include <stdio.h>
#include <string.h>

int main() {
char str1[10]="Shakar";
char str2[]="karg";
    if (strstr(str1, str2)!=NULL) {
        printf("bor\n");
    } else {
        printf("yo'q\n");

    }

    
    return 0;
}