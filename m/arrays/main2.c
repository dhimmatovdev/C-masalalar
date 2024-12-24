#include <stdio.h> 

int main() {
    int arrays1[]={1,2,3,4}, arrays2[]={1,2,3,5};
    int size=sizeof(arrays1)/sizeof(int);

    for (int i=0; i<size; i++) {
        if (arrays1[i]==arrays2[i]) {
                printf("True\n");
            } else {
                printf("False\n");
            }
        
        
    }
    return 0;
}