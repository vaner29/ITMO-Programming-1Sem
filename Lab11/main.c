//var 16
#include "anyTriangle.h"
#include <stdio.h>

int main(){
    struct point a, b, c;
    //scanf("%g %g %g %g %g %g", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
    a.x = 0; a.y = 0; b.x = 3; b.y = 5; c.x = 10; c.y = 0;
    printf("Triangle length =%g, Triangle area = %g", triangleLength(a,b,c), triangleArea(a,b,c));
    return 0;
}
