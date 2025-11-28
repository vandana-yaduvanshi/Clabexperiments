#include <stdio.h>

struct book {
    int id;
    char name[20];
};

int main(){
    struct book b;
    printf("Enter ID and Book Name: ");
    scanf("%d %s", &b.id, b.name);

    printf("ID: %d Name: %s\n", b.id, b.name);
}

