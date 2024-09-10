#include <stdio.h> 

int main() {
    char c; 

    printf("Entrez un caractere : "); 
    scanf("%c", &c); 

    
    if (c >= 'A' && c <= 'Z') {
        printf("'%c' est une lettre majuscule.\n", c); 
    }
   
    else if (c >= 'a' && c <= 'z') {
        printf("'%c' est une lettre minuscule.\n", c); 
    }
        else {
        printf("'%c' n'est pas une lettre de l'alphabet.\n", c); 
    }

    return 0; 
}