#include <stdio.h>
#include <string.h>

int main () {
    char str1[100]="Ali";
    char str2[]="sh";

    strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}