#include <stdio.h>

int Reverse(int x){
    int inv = 0, temp = x;
    while (temp){
        inv = (inv << 1) + 1;
        temp = temp >> 1;
    }
    return x^inv;
}

int main(){
    int x;
    scanf("%x", &x);
    printf("X in decimal = %d\n", x);
    printf("X in octal = %o, X in octal moved -> by 3 bits = %o\n", x, x>>3);
    printf("X in octal = %o, X in octal reversed = %o\n", x, Reverse(x));
    int y;
    scanf("%o", &y);
    printf("X or Y in octal = %o", x|y);
}
