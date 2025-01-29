#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int last_non_zero_index = 0;
    for (int i = 0; i<numsSize; i++) {
        if (nums[i]!=0) {
            int temp =nums[last_non_zero_index];
            nums[last_non_zero_index]=nums[i];
            nums[i]=temp;
            last_non_zero_index++;
        }
    }
}
int main() {
    int nums[]={0,1,0,3,12};
    int size=sizeof(nums)/sizeof(nums[0]);
    printf("Orginal array: ");
    for (int i =0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    moveZeroes(nums, size);

    printf("Modified array: ");
    for (int i=0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}