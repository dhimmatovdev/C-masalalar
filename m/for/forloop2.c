#include <stdio.h>

int main() {
    int n=10;

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (i==0 || i==9 || j%2==0) {
                printf("%d %d", i, j);
            } else {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }

    return 0;
}