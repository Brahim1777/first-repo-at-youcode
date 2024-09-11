#include <stdio.h>

int main() {
    float budget; 
    int destination; 
    int nombre_de_personnes; 

    
    printf("Entrez votre budget (en euros) : ");
    scanf("%f", &budget); 

    
    printf("Entrez votre destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination); 

    
    printf("Entrez le nombre de personnes : ");
    scanf("%d", &nombre_de_personnes);

    
    if (budget >= 1000 && destination == 1 && nombre_de_personnes > 2) {

        printf("Recommandation : Voyage haut de gamme a la plage.\n");
    } else if (budget >= 500 && budget < 1000 && destination == 2 && nombre_de_personnes <= 2) {
       
        printf("Recommandation : Voyage moyen à la montagne.\n");
    } else if (destination == 3) {
       
        printf("Recommandation : Voyage en ville.\n");
    } else {
       
        printf("Aucune recommandation disponible pour votre choix.\n");
    }

    return 0; 
}
 
