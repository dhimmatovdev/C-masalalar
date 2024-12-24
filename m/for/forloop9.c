#include <stdio.h>

int main() {
    int n=5;
    for (int i = 1; i<=n; i++) {
        int temp = 0;
        for (int j=1; j<=n;) {
            if  (temp == i) {
                printf("*");
                j++;
            } else {
                temp++;
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}