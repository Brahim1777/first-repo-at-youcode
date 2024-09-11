#include <stdio.h> 

int main() {
    int score; 
    int anciennete; 
    int recompenses; 
    float evaluation; 

    printf("Entrez le score de performance (0 a 100) : ");
    scanf("%d", &score); 


    printf("Entrez l anciennete (en annees) : ");
    scanf("%d", &anciennete); 

    
    printf("Entrez le nombre de recompenses (0, 1 ou 2) : ");
    scanf("%d", &recompenses); 

   
    if (score >= 90 && anciennete >= 5) {
        evaluation = 1.0; 
    } else if (score >= 75 && anciennete >= 3) {
        evaluation = 0.75; 
    } else if (score >= 50 && anciennete < 3) {
        evaluation = 0.5; 
    } else {
        evaluation = 0.25; 
    }

   
    if (recompenses == 1) {
        evaluation =evaluation + 0.1 * evaluation; 
    } else if (recompenses >= 2) {
        evaluation = evaluation + 0.2 * evaluation; 
    }

    
    printf("L evaluation finale est : %.2f\n", evaluation); 

    return 0; 
}

 
