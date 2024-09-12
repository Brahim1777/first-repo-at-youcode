#include <stdio.h> 

int main() {
    int lignes; 
    int N ;
    int i ;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes); 

    for (int i = 1; i <= lignes; i++) {
        N = 2 * i - 1;       
      
        for (int j = lignes; j > i; j--) {
            printf(" "); 
        }
        
        for (int k = 0; k < N; k++) {
            printf("*"); 
        }

        printf("\n"); 
    }

    return 0; 
}



