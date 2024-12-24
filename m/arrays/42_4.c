#include <stdio.h>
#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    int left = 0;
    int right = numsSize - 1;
    int pos = numsSize - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[pos] = leftSquare;
            left++;
        } else {
            result[pos] = rightSquare;
            right--;
        }
        pos--;
    }

    return result;
}

int main() {
    int nums[] = {-7, -3, 2, 3, 11};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* sortedSquaresArray = sortedSquares(nums, numsSize, &returnSize);

    printf("Sorted Squares: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", sorted
