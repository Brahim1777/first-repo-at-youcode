#include <stdio.h> 

int main() {
    int n;
    int tableau[n]; 
     int max;
     int i ;
    printf("Entrez le nombre d'elements: "); 
    scanf("%d", &n);  

    for ( i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tableau[i]); 
    }

     max = tableau[0]; 

    for ( i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i]; 
        }
    }

    printf("Le plus grand element est: %d\n", max); 
    return 0; 
}
