//var 16, оказывается мы должны были делать на одну позицию больший вариант :p
#include <stdio.h>
#include <malloc.h>

#define size 4

int main(){
    double array[size];
    double* pointerArray = array;
    array[0] = -3.4;
    array[1] = 4.5;
    array[2] = -5.6;
    array[3] = 6.7;
    printf("Array using a pointer: ");
    for (int i = 0; i < size; i++){
        printf("%g ", *(pointerArray + i));
    }
    printf("\nA dynamic Array: ");


    double* dynamicArray = (double*) malloc (size * sizeof(double));
    dynamicArray[0] = -3.4;
    dynamicArray[1] = 4.5;
    dynamicArray[2] = -5.6;
    dynamicArray[3] = 6.7;
    for (int i = 0; i < size; i++){
        printf("%g ", dynamicArray[i]);
    }
    free(dynamicArray);
}
