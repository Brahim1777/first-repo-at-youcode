#include <stdio.h> 

int main() {
    int n;
    int T[n];
    int i;
    int element;
    int  trouve ;
    printf("Entrez le nombre d'éléments: "); 
    scanf("%d", &n); 

    
    for ( i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i + 1); 
        scanf("%d", &T[i]); 
    }

    
    printf("Entrez l'élément à rechercher: "); 
    scanf("%d", &element); 
      trouve = 0; 
    for ( i = 0; i < n; i++) {
        if (T[i] == element) { 
            trouve = 1; 
            break; 
        }
    }

   
    if (trouve) {
        printf("L'élément %d est présent dans le tableau.\n", element); 
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", element); 
    }

    return 0;
}
