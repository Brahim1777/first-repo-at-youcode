#include <stdio.h> 

int main() {
    int base;
    int exposant; 
    long resultat = 1; 
   
    printf("Entrez la base (positive) : ");
    scanf("%d", &base); 

    printf("Entrez l'exposant (non negatif) : ");
    scanf("%d", &exposant); 

    if (base < 0 || exposant < 0) {
        printf("Erreur : La base doit être positive et l'exposant non negatif.\n");
        return 1;
    }

    
    while (exposant > 0) { 
        resultat *= base; 
        exposant--; 
    }

   
    printf("Le résultat de %d élevé à la puissance %d est : %ld\n", base, exposant, resultat); // Affiche le résultat
    return 0; 
}
