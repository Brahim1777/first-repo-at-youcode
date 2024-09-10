#include <stdio.h> 
int main() {
    float t; 

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &t); 


    if (t < 0) { 
        printf("L'eau est a l'etat solide.\n"); 
    } else if (t >= 0 && t < 100) { 
        printf("L'eau est a l'etat liquide.\n"); 
    } else { 
        printf("L'eau est a l'etat gazeux.\n"); 
    }

    return 0; 
}
