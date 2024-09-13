#include <stdio.h> 

int main() {
    int nombre; 
     int chiffre;
    printf("Entrez un entier à plusieurs chiffres : "); 
    scanf("%d", &nombre); 
   
    while (nombre > 0) { 
         chiffre = nombre % 10; 
        printf("%d", chiffre);
        nombre = nombre / 10; 
    }    
    printf("\n"); 
    return 0;
}
