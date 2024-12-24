#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toLowercase(char* str) {
    for (int i = 0; str[i]!='\0'; i++) {
        str[i]=tolower(str[i]);
    } 
}

int main () {

    char strA[20]="dasTurlaSh";
    char strB[20]="Dasturlash";

    toLowercase(strA);
    toLowercase(strB);
    

    if (strcmp(strA, strB)==0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}