#include <stdio.h>

struct emp {
    char name[20];
    float basic;
};

int main(){
    struct emp e;
    printf("Enter name and salary: ");
    scanf("%s %f", e.name, &e.basic);

    printf("Gross Salary = %.2f\n", e.basic + 0.5*e.basic);
}

