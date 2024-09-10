#include <stdio.h> 

int main() {
    int a, b; 
    printf("Entrez deux valeurs entieres : "); 
    scanf("%d %d", &a, &b); 
   
    if (a == b) {
        
        printf("Le triple de la somme est : %d\n", 3 * (a + b)); 
    } else {
        
        printf("La somme est : %d\n", a + b); 
    }

    return 0; 
}