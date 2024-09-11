#include <stdio.h> 


int main() {
    int age; 
    int anneesCotisation; 
    float montantEpargne; 
    float bonus = 0; 

    printf("Entrez votre age: ");
    scanf("%d", &age); 

    
    printf("Entrez le nombre d'annees de cotisation: ");
    scanf("%d", &anneesCotisation); 

    printf("Entrez le montant total epargne (en euros): ");
    scanf("%f", &montantEpargne); 

    if (age >= 65 && anneesCotisation >= 30 && montantEpargne >= 100000) {
        printf("Plan complet avec pension elevee\n"); 
    } else if (age >= 65 && anneesCotisation >= 20 && montantEpargne >= 50000) {
        printf("Plan partiel avec pension moyenne\n"); 
    } else if (age < 65) {
        printf("Plan epargne non encore disponible\n"); 
    }

    
    if (montantEpargne > 50000) {
        bonus = (montantEpargne - 50000) / 10000 * 5; 
        printf("Bonus supplementaire: %.2f euros\n", bonus); 
    }

    return 0;
}
