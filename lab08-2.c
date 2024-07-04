#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int row=5, col=3;

    int *matrix= (int*)malloc(row*col*sizeof(int));

    int value[5][3] = { {0,1,2}, {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i * col + j] = value[i][j];
        }
    }

    int result = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            result -= matrix[i * col + j];
        }
    }

    printf("result : %d\n", result);
    
    free(matrix);    
    return 0;
}
