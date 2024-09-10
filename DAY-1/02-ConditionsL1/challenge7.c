#include <stdio.h> 

int main() {
    char caractere; 

    printf("Entrez un caractere : ");
    scanf("%c", &caractere); 

    if (caractere >= 'A' && caractere <= 'Z') { 
        printf("%c est un alphabet majuscule.\n", caractere); 
    } else {
        printf("%c n'est pas un alphabet majuscule.\n", caractere); 
    }

    return 0; 
}