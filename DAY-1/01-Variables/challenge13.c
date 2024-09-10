#include <stdio.h> 
int main() {
    int nombre; 
    printf("Entrez un nombre entier: "); 
    scanf("%d", &nombre); 
    printf("Valeur binaire: ");
    for (int i = sizeof(nombre) * 8 - 1; i >= 0; i--) { 
        printf("%d", (nombre >> i) & 1); 
    }
    printf("\n"); 

    printf("Valeur hexadecimale: %X\n", nombre); 

    return 0; 
}