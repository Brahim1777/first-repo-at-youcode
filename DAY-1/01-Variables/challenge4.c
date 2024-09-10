#include <stdio.h> 

int main() {
    float vitesse_kmh; 
    float vitesse_ms;  
    
    printf("Entrez la vitesse en kilometres par heure (km/h) : ");
    scanf("%f", &vitesse_kmh); 

    vitesse_ms = vitesse_kmh * 0.27778; 

    printf("La vitesse en metres par seconde (m/s) est : %.2f\n", vitesse_ms); 

    return 0; 
}
