#include <stdio.h>
#include <unistd.h>

int main() {
    int n, mul=0; 
    scanf("%d", &n);

    for (int i =0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            printf(" * "); 
        }
        printf("\n");
        usleep(200000);
    }
    return 0;
}