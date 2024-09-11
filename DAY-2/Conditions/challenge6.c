#include <stdio.h>

int main() {
    float consommation;
    int type_utilisateur;
    int type_contrat; 
    float facture;

    printf("Entrez la consommation d electricité (en kWh) : ");
    scanf("%f", &consommation); 

    printf("Entrez le type d utilisateur (1 pour résidentiel, 2 pour commercial) : ");
    scanf("%d", &type_utilisateur); 
    printf("Entrez le type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d", &type_contrat);

    
    if (type_utilisateur == 1) { 
        if (type_contrat == 0) { 
            facture = consommation * 0.20; 
        } else { 
            facture = consommation * 0.15; 
        }
    } else { 
        if (type_contrat == 0) { 
            facture = consommation * 0.30; 
        } else {
            facture = consommation * 0.25; 
        }
    }

    
    if (consommation > 500) {  
        facture =  facture * 1.10; 
    }

    
    printf("Le montant de la facture est : %.2f €\n", facture);

    return 0; 
}