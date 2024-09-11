#include <stdio.h> 

int main() {
    int joursAccordes; 
    int joursUtilises; 
    int statut; 
    int joursRestants; 


    printf("Entrez le nombre total de jours de conges accordes : ");
    scanf("%d", &joursAccordes); 

   
    printf("Entrez le nombre de jours de conges utilises : ");
    scanf("%d", &joursUtilises); 

    
    printf("Entrez le statut de l employe (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut); 
    
    if (joursUtilises > joursAccordes) {
       
        printf("Alerte : Les jours de conges utilises depassent les jours accordes.\n");
    } else {
       
        if (statut == 1) {
            joursRestants = joursAccordes - joursUtilises;
        } else { 
            joursRestants = (joursAccordes / 2) - joursUtilises; 
        }

        
        printf("Nombre de jours de conges restants : %d\n", joursRestants);

    return 0; 
    }
}
