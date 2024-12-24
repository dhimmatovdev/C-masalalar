#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** triangle=(int**)malloc(numRows*sizeof(int*));
    *returnColumnSizes=(int*)malloc(numRows*sizeof(int));
    for (int i=0; i<numRows; i++) {
        triangle[i]=(int*)malloc((i+1)*sizeof(int));
        triangle[i][0]=1;
        triangle[i][i]=1;
        for(int j=1; j<i; j++) {
            triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
        }
        (*returnColumnSizes)[i]=i+1;
    }
    *returnSize=numRows;
    return triangle;
}
void freeMemory(int** triangle, int* returnColumnSizes, int returnSize) {
    for (int i = 0; i < returnSize; i++) {
        free(triangle[i]);
    }
    free(triangle);
    free(returnColumnSizes);
}

int main() {

    int numRows =5;
    int returnSize;
    int* returnColumnSizes;
    int** triangle = generate(numRows, &returnSize, &returnColumnSizes);
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    freeMemory(triangle, returnColumnSizes, returnSize);


    return 0;
}