//var16
#include <stdlib.h>
#include <stdio.h>

int main(){
    //Task 1
    char string[10];
    scanf("%s", &string);
    int kint = 0;
    int kchar = 0;
    for (int i = 0; i < strlen(string); i++){
        if (string[i] >= '0' && string[i] <= '9') kint++;
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')) kchar++;
    }
    printf("numbers = %d, symbols = %d \n", kint, kchar);

    //Task 3
    int x;
    scanf("%d", &x);
    itoa(x, string, 10);
    printf("%s", string);
    return 0;
}
