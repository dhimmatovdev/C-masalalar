#include <stdio.h>

int main() {
int n;

double temp = 0, sum=0;
scanf("%d", &n);

for (double i = 1; i <= n; i++) {
    sum+=1/i;
    
    }
    printf("%f\n", sum);
}