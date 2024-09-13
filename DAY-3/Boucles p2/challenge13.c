#include <stdio.h> 

int main() {
    int nombre; 
    int i; 
    int somme = 0; 

   
    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre); 

   
    for (i = 1; i <= 10; i++) {
        int produit = nombre * i; 
        printf("%d x %d = %d\n", nombre, i, produit);
        somme += produit; 
    }

    printf("La somme des produits est: %d\n", somme); 
    return 0; 
}
