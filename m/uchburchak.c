#include <stdio.h>
#include <math.h>

int main() {
    float a = 3;
    float b = 4;
    float c = 6;
    float yarim_p = (a+b+c)/2;
    float yuza = sqrt(yarim_p * (yarim_p - a) * (yarim_p -b) * (yarim_p - c));

    printf("%.2f\n", yuza);

    return 0;
}