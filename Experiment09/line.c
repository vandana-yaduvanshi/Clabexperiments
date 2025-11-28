#include <stdio.h>

int main(){
    FILE *f = fopen("test.txt","r");
    char s[50];

    while(fgets(s,50,f))
        printf("%s", s);
}

