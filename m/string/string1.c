#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int index;
    printf("Satrni kiritng: \n");
    scanf("%s", str);

    printf("Indexni kiriting:\n");
    scanf("%d\n", &index);   

    if (index>=0 && index<strlen(str)) {
        printf("Index = %d -> %c\n", index, str[index]);

    } else {
        printf("Xat0!!!!!\n");
    }

    return 0;
}