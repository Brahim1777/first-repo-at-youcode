#include <stdio.h> 

int main() {
    int n; 
    int temp ;
    int tableau[n]; 
    int i,j;

    printf("Entrez le nombre d'elements dans le tableau : "); 
    scanf("%d", &n); 

     tableau[n]; 

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1); 
        scanf("%d", &tableau[i]);
    }
   
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) { 
            if (tableau[j] > tableau[j + 1]) { 

                 temp = tableau[j];
                tableau[j] = tableau[j + 1]; 
                tableau[j + 1] = temp; 
            }
        }
    }
    
    printf("Tableau trie en ordre croissant : "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", tableau[i]);
    }
    printf("\n"); 

    return 0; 
}
