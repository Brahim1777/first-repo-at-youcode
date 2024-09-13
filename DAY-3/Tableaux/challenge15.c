#include <stdio.h> // Inclusion de la bibliothèque standard d'entree/sortie

int main() {
    int n1, n2; // Déclaration des variables pour stocker le nombre d'elements des tableaux
    int T[n1]; // Déclaration du premier tableau avec la taille spécifiée par l'utilisateur
     int T2[n2]; // Déclaration du deuxième tableau avec la taille spécifiée par l'utilisateur
    int i ;
    printf("Entrez le nombre d'éléments du premier tableau: "); 
    scanf("%d", &n1); 
   
    for ( i = 0; i < n1; i++) {
        printf("Entrez l'élément %d: ", i + 1); 
        scanf("%d", &T[i]); 
    }

    printf("Entrez le nombre d'elements du deuxieme tableau: "); 
    scanf("%d", &n2); 
    int T2[n2]; 

    for ( i = 0; i < n2; i++) {
        printf("Entrez l'element %d: ", i + 1); 
        scanf("%d", &T[i]); 
    }

    int tableauFusionne[n1 + n2];
    for ( i = 0; i < n1; i++) {
        tableauFusionne[i] = T2[i]; 
    }

    
    for ( i = 0; i < n2; i++) {
        tableauFusionne[n1 + i] =T2[i]; 
    }

   
    printf("Tableau fusionne: "); 
    for ( i = 0; i < n1 + n2; i++) {
        printf("%d ", tableauFusionne[i]);
    }
    printf("\n"); 
    return 0; 
}

