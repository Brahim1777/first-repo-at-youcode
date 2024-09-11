#include <stdio.h>

int main() {
   
    float revenu;
    int score_credit;
    int duree_pret;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre score de credit (sur 1000) : ");
    scanf("%d", &score_credit);

    printf("Entrez la duree du prEt (en annEes) : ");
    scanf("%d", &duree_pret);

    if (revenu >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Vous Etes eligible pour le pret.\n");
    } else if (revenu >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Vous êtes Eligible pour le pret avec conditions.\n");
    } else {
        printf("Vous n'Etes pas eligible pour le pret.\n");
    }

    return 0; 
