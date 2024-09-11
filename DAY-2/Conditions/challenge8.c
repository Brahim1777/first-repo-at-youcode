#include <stdio.h> 

int main() {
    int age; 
    int historiqueMedical; 
    int typeCouverture; 

    
    printf("Entrez votre age: ");
    scanf("%d", &age); 

    
    printf("Entrez votre historique medical (0 pour aucun problème, 1 pour probleme mineur, 2 pour probleme majeur): ");
    scanf("%d", &historiqueMedical); 

    
    printf("Entrez le type de couverture (1 pour de base, 2 pour etendue): ");
    scanf("%d", &typeCouverture);

   
    if (age < 30) { 
        printf("Plan de base\n");
    } else if (age >= 30 && historiqueMedical == 0) { 
        printf("Plan de base\n"); 
    } else if (age >= 30 && historiqueMedical >= 1) { 
        printf("Plan étendu\n"); 
        if (historiqueMedical == 2) { 
            printf("Couverture supplémentaire pour problèmes majeurs\n"); 
        }
    }

    return 0; 
