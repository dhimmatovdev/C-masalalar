#include <stdio.h>

double max(double a, double b, double c, double d) {
    double max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;
    return max_val;
}

double min(double a, double b, double c, double d) {
    double min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;
    return min_val;
}

int main() {
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    double max_result = max(x + y + z, x, y, z);
    double min_result = min(x + y / 2, x, y, z);
    double min_squared = min_result * min_result;

    printf("%.2lf %.2lf\n", max_result, min_squared);

    return 0;
}
