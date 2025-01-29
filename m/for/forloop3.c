#include <stdio.h>

int main() {
    int n=10;
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%2d\t", i*n+j);
        }
        printf("\n");
    }
    return 0;
}