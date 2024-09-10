#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    float nombre1, nombre2, nombre3;
    float po1 = 2, po2 = 3, po3 = 5; 
    float moyenne; 

    printf("Entrez le premier nombre: ");
    scanf("%f", &nombre1); 
    
    printf("Entrez le deuxieme nombre: ");
    scanf("%f", &nombre2); 

    
    printf("Entrez le troisieme nombre: ");
    scanf("%f", &nombre3); 

    
    moyenne = (nombre1 * po1 + nombre2 * po2 + nombre3 * po3) / 10 ; 
    
    printf("La moyenne ponderee est: %.2f\n", moyenne); 

    return 0; 
}
