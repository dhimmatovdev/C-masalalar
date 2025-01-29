#include <stdio.h>

void aylantirsh(int nums[], int start, int end) {
        
    while (start<end) {

        int temps=nums[start];
        nums[start]=nums[end];
        nums[end]=temps;
        start++;
        end--;
        
        
            
    }
}
void rotate(int nums[], int n, int k) {
    k = k % n;
    aylantirsh(nums, 0, n - 1);

    aylantirsh(nums, 0, k - 1);

    aylantirsh(nums, k, n - 1);
}

int main() {
    int nums[]={1,2,3,4,5,6,7};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k;

    scanf("%d", &k);
    rotate(nums, n, k);
    for (int i = 0; i<n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}   