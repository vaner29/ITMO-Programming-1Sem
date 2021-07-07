//var 16
#include <stdio.h>

enum printForms {Book,
                Journal,
                Newspaper,
                Brochure,
                Handout,
                Monograph,
                };

struct circle {
    double centerX;
    double centerY;
    double radius;
 //   double circleLength = radius*3.14*2;
} ;

double getCircleLength(struct circle myCircle){
    return myCircle.radius * 3.14 * 2;
}

int main() {
    printf("Newspaper = %d\n", Newspaper+1);

    struct circle myCircle = {1.3, 2.1, 5.0};
    printf("The length of a circle with a radius of %g equals %g\n", myCircle.radius, getCircleLength(myCircle));

    struct keyboard {
        unsigned NumLock : 1;
        unsigned CapsLock : 1;
        unsigned ScrollLock : 1;
    };
    union state {
        unsigned definer;
        struct keyboard check;
    };
    union state myState;
    scanf("%x", &myState.definer);
    printf("NumLock = %d\n", myState.check.NumLock);
    printf("CapsLock = %d\n", myState.check.CapsLock);
    printf("ScrollLock = %d\n", myState.check.ScrollLock);

}
