#include <stdio.h> 

int main() {
    float salaire_base; 
    int heures_supp; 
    int type_poste; 
    float salaire_total; 

    
    printf("Entrez le salaire de base (en euros) : ");
    scanf("%f", &salaire_base); 

    
    printf("Entrez le nombre d heures supplementaires : ");
    scanf("%d", &heures_supp); 

   
    printf("Entrez le type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &type_poste); 

    
    if (type_poste == 1) { 
        salaire_total = salaire_base + (0.10 * salaire_base); 
    } else if (type_poste == 2) { 
        salaire_total = salaire_base + (0.20 * salaire_base); 
    } else {
        printf("Type de poste invalide.\n"); 
        return 1; 
    }

    
    salaire_total = salaire_total+heures_supp * (salaire_base / 160) * 1.5; 

   
    printf("Le salaire total est : %.2f euros\n", salaire_total); 

    return 0; 
}
