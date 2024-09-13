#include <stdio.h> 

int main() {
    int n; 
    int i;
    int T[n];
   
    printf("Entrez le nombre d'Elements du tableau : "); 
    scanf("%d", &n); 

   

    for ( i = 0; i < n; i++) { 
        printf("Entrez l'element %d : ", i + 1); 
        scanf("%d", &T[i]); 
    }

    
    printf("Les elements du tableau sont : \n"); 
    for ( i = 0; i < n; i++) {
        printf("%d ", T[i]); 
    }
    printf("\n"); 
    return 0; 
}
