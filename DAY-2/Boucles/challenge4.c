#include <stdio.h> 

int main() {
    int n;
    int i ; 
    printf("Entrez un nombre entier: "); 
    scanf("%d", &n); 

    
    for (i = 0; i < n; i++) { 
        printf("%d", 2 * i + 1); 
        if (i < n - 1) { 
            
        }
    }
    printf("\n"); 
    return 0; 
}