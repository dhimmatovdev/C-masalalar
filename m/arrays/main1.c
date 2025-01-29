#include <stdio.h>

int main() {
    int arrays[]={1,2,3,4,7};
    int size=sizeof(arrays)/sizeof(int);
    int sum=5;

    for (int i = 0; i<size; i++) {
        for (int j =i+1; j<size; j++) {
            if (arrays[i]+arrays[j]==5) {
            
            printf("%d + %d = %d\n", arrays[i], arrays[j],sum);
            }
        }
        
    }
    return 0;
}