#include <stdio.h>

union info {
    int num;
};

int main(){
    union info i;
    i.num = 10;
    printf("Value = %d\n", i.num);
}

