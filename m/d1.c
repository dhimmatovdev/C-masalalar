#include <stdio.h>
#include <stdlib.h>

    int manhattan_distance(int x1, int y1, int x2, int y2) {
        return abs(x1-x2)+abs(y1-y2);
    }
int main() {
    int N;
    scanf("%d", &N);

    int X[N], Y[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &X[i], &Y[i]);
    }
    int min_distance = __INT_MAX__;
    int max_distance = 0; 
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j<N; j++) {
            int distance = manhattan_distance(X[i], Y[i], X[j], Y[j]);

            if (distance<min_distance) {
                min_distance = distance;
            }
            if (distance>max_distance) {
                max_distance = distance;
            }
        }
    }
    printf("%d %d\n", min_distance, max_distance);

    return 0;
}