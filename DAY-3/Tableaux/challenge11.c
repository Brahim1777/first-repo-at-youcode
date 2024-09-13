#include <stdio.h> 

int main() {
    int n; 
    int tableau[n];
     int valeurARemplacer, nouvelleValeur;
     int i;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n); 
  
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i + 1); 
        scanf("%d", &tableau[i]); 
    }

    printf("Entrez la valeur à remplacer: "); 
    scanf("%d", &valeurARemplacer); 
    printf("Entrez la nouvelle valeur: "); 
    scanf("%d", &nouvelleValeur);

    
    for ( i = 0; i < n; i++) {
        if (tableau[i] == valeurARemplacer) { 
            tableau[i] = nouvelleValeur; 
        }
    }

    printf("Tableau modifie: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", tableau[i]); 
    }
    printf("\n"); 

    return 0; 
}
