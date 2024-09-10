#include <stdio.h> 

int main() {
    int nombre; 
    printf("Entrez un nombre entier a quatre chiffres : "); 
    scanf("%d", &nombre); 

    
    int chiffre1 = nombre / 1000; 
    int chiffre2 = (nombre / 100) % 10; 
    int chiffre3 = (nombre / 10) % 10; 
    int chiffre4 = nombre % 10; 

    printf("L'inverse du nombre est : %d%d%d%d\n", chiffre4, chiffre3, chiffre2, chiffre1); 

    return 0; 
}