#include <stdio.h> 

int main() {
    int n;
    long long factorial = 1;

    printf("Entrez un nombre entier: ");
    scanf("%d", &n); 

    if (n < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n"); 
    } else {
        
        for (int i = 1; i <= n; i++) { 
            factorial *= i;
        }
    
        printf("La factorielle de %d est %lld\n", n, factorial);
    }

    return 0; 
}
