#include <stdio.h> 

int main() {
    int n; // Déclaration de la variable pour le nombre d'elements
    float somme ;
    int T[n];
    float moyenne; 

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n); 
 
     somme = 0;
       for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1); 
        scanf("%d", &T[i]); 
        somme += T[i]; 
    }

     moyenne = somme / n; 

    printf("La moyenne est: %.2f\n", moyenne); 

    return 0; 
}
