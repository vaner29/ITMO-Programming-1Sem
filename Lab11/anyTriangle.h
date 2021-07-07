#ifndef ANYTRIANGLE_H_INCLUDED
#define ANYTRIANGLE_H_INCLUDED

#include <math.h>

struct point {
    double x;
    double y;
};

struct anyTriangle {
    struct point left;
    struct point right;
    struct point up;
};

double triangleLength(struct point a, struct point b, struct point c){
    struct point ab, bc, ca;
    ab.x = b.x - a.x;
    ab.y = b.y - a.y;
    double abl = sqrt((ab.x)*(ab.x)+(ab.y)*(ab.y));
    bc.x = c.x - b.x;
    bc.y = c.y - b.y;
    double bcl = sqrt((bc.x)*(bc.x)+(bc.y)*(bc.y));
    ca.x = a.x - c.x;
    ca.y = a.y - c.y;
    double cal =sqrt((ca.x)*(ca.x)+(ca.y)*(ca.y));
return (abl + bcl + cal);
}

double triangleArea(struct point a, struct point b, struct point c){
    struct point ab, bc, ca;
    ab.x = b.x - a.x;
    ab.y = b.y - a.y;
    double abl = sqrt((ab.x)*(ab.x)+(ab.y)*(ab.y));
    bc.x = c.x - b.x;
    bc.y = c.y - b.y;
    double bcl = sqrt((bc.x)*(bc.x)+(bc.y)*(bc.y));
    ca.x = a.x - c.x;
    ca.y = a.y - c.y;
    double cal =sqrt((ca.x)*(ca.x)+(ca.y)*(ca.y));
    double p = triangleLength(a,b,c) / 2;
    return sqrt (p * (p - abl)*(p - bcl)*(p - cal));
}

#endif // ANYTRIANGLE_H_INCLUDED
