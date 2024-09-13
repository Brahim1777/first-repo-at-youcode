#include <stdio.h> 

int main() {
    int n; 
    printf("Entrez le nombre d'elements: "); 
    scanf("%d", &n); 

    int tableau[n]; 

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1); 
        scanf("%d", &tableau[i]); 
    }

    int facteur; 
    printf("Entrez le facteur de multiplication: "); 
    scanf("%d", &facteur); 

    
    for (int i = 0; i < n; i++) {
        tableau[i] *= facteur; 
    }

    
    printf("Tableau resultant: "); 
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]); 
    }
    printf("\n"); 

    return 0; 
}
