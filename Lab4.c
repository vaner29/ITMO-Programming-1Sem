//var 15
#include <stdio.h>

int main(){
    int lowerThan, higherThan, x;
    scanf("%d", &x);
    lowerThan = x < 0;
    higherThan = x > -5;
    printf("Does X belong to the interval? %d\n", lowerThan&higherThan);
    scanf("%x", &x);
    printf ("The 15th bit in X = %x equals %d", x, (x>>14)%2);
}
