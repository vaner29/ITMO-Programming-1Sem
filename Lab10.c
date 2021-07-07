//var 16
#include <stdio.h>
#include <malloc.h>

int NOD(int x, int y){
    if (x != 0) {
        return (NOD(y % x, x));
    }
    else return y;
}

int NOK (int x, int y){
    return x / NOD(x,y) * y;
}

int arrForm(int *a, int n){
    int k = 0;
    int temp = n;
    while ( temp != 0){
        temp = temp / 10;
        k++;
    }
    int i = k - 1;
    while (n != 0){
        a[i] = n % 10;
        n = n / 10;
        i--;
    }
    return k;
}

int main(){
 /*   //Task 1
    int x,y;
    scanf("%d %d", &x, &y);
    printf("NOK = %d, NOD = %d\n", NOK(x,y), NOD(x,y)); */
    //Task 3
    int a[10];
    int n;
    scanf("%d", &n);
    int k = arrForm(a, n);
    for (int i = 0; i < k; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
