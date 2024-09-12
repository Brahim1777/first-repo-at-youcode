#include <stdio.h>

int main() {
    int n; // Déclaration de la variable pour le nombre d'éléments
     int tableau[n];
     int i;
    printf("Entrez le nombre d'éléments: "); 
    scanf("%d", &n); 

    int tableau[n];
    
    for ( i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i + 1); 
        scanf("%d", &tableau[i]);
    }

    printf("Les éléments pairs du tableau sont: ");

    for (i = 0; i < n; i++) {
        if (tableau[i] % 2 == 0) { 
            printf("%d ", tableau[i]); 
        }
    }
    printf("\n"); 
    return 0; 
}
