#include <stdio.h>
#define size 6
#define sizem 2


int main(){
    int arr[size];
    int temp=34;
    for (int i = size; i > 0; i--){
        arr[i] = temp;
        temp = temp + 11;
        printf("%d ", arr[i]);
    }
    printf("\n");
    int matrix1[sizem][sizem] = {2, 1, 1, 3};
    int matrix2[sizem][sizem] = {1, 2, 3, 1};
    int matrixMult[sizem][sizem];

    for (int i = 0; i < sizem; i++){
        for (int j = 0; j < sizem; j++){
            matrixMult[i][j]=0;
            for (int k = 0; k < sizem; k++){
                matrixMult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < sizem; i++){
        for (int j = 0; j < sizem; j++){
            printf("%d ", matrixMult[i][j]);
        }
        printf("\n");
    }
}
