#include <stdio.h> 

int main() {
    int nombre; 
    int chiffre; 
    int inverse = 0; 

    printf("Entrez un entier à plusieurs chiffres : "); 
    scanf("%d", &nombre); 

    while (nombre != 0) { 
        chiffre = nombre % 10; 
        inverse = inverse * 10 + chiffre; 
        nombre = nombre / 10; 
    }

    printf("Le nombre inversé est : %d\n", inverse); 
    return 0; 
}