#include <stdio.h>
#include <string.h>

int main() {


    char num[100];
    printf("entrer un nombre : ");
    scanf(" %s",&num);
    
    int longeur = strlen(num);
    printf("%d\n",longeur);

    return 0;
}