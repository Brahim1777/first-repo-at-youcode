#include <stdio.h> 

int main() {
    int n;
    int i ;
     
    printf("Entrez un nombre entier positif: "); // Demande à l'utilisateur d'entrer un nombre
    scanf("%d", &n); 

    printf("Les facteurs de %d sont: ", n); 

    for ( i = 1; i <= n; i++) {
        if (n % i == 0) { 
            printf("%d ", i); 
        }
    }
    printf("\n"); 
    return 0; 
}
