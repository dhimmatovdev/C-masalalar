#include <stdio.h>
#include <math.h>

int main() {
    double n, x, S, sum=0;
    
    scanf("%lf %lf", &n, &x);
    double squart=sqrt(n);
    S=pow(x,n)/squart;
    for (double i = 0; i<=n; i++) {
        sum=i+S;
    }
    printf("%.3lf\n", sum);
    return 0;
}