#include <stdio.h> 

int main() {
    
    const char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    int choix; 

    printf("Veuillez choisir un jour de la semaine (0 pour Lundi, 1 pour Mardi, ..., 6 pour Dimanche) : ");
    scanf("%d", &choix); 

    if (choix < 0 || choix > 6) {
        printf("Choix invalide. Veuillez entrer un nombre entre 0 et 6.\n"); 
    } else {
        
        printf("Vous avez choisi : %s\n", jours[choix]); 
        

        printf("Les jours suivants sont : ");
        for (int i = 1; i <= 6; i++) { 
            int jourSuivant = (choix + i) % 7;
            printf("%s ", jours[jourSuivant]); 
        }
        printf("\n"); 
    }

    return 0; 
}
