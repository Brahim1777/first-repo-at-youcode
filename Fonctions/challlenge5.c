#include <stdio.h> 

int factorielle(int n) {
    
    if (n == 0) {
        return 1; 
    } else {
       
        return n * factorielle(n - 1);
    }
}

int main() {
    int nombre; 
    printf("Entrez un entier positif: ");
    scanf("%d", &nombre); 

    if (nombre < 0) {
        printf("Veuillez entrer un entier positif.\n"); 
    } else {
        
        printf("La factorielle de %d est %d\n", nombre, factorielle(nombre)); 
    }

    return 0; 
}
