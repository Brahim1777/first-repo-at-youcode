#include <stdio.h> 

int somme(int a,int b) {
   
     return a + b; 
}

int main() {
    int nombre1, nombre2; 
    printf("Entrez le premier nombre: "); 
    scanf("%d", &nombre1); 
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &nombre2);

    printf("La somme de %d et %d est: %d\n", nombre1, nombre2, somme(nombre1, nombre2)); 
    return 0; 
}

