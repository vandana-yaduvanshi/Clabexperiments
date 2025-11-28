#include<stdio.h>
int main() {
char name[40];
int age;
printf("Enter your name: ");
scanf("%39s", name);
printf("Enter your age: ");
scanf("%d", &age);
printf("Your name is: %s\n Your age is: %d\n", name, age);
return 0;
}
