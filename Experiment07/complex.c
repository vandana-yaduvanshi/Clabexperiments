#include <stdio.h>

struct complex {
    int r,i;
};

int main(){
    struct complex a,b;
    printf("Enter first complex: ");
    scanf("%d %d", &a.r, &a.i);

    printf("Enter second complex: ");
    scanf("%d %d", &b.r, &b.i);

    printf("Sum = %d + %di\n", a.r+b.r, a.i+b.i);
}

