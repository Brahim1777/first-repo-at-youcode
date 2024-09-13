#include <stdio.h> 

int main() {
    int original[5] = {1, 2, 3, 4, 5}; 
    int copie[5]; 

    for (int i = 0; i < 5; i++) {
        copie[i] = original[i];
    }

    
    printf("Tableau original : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", original[i]); 
    }
    printf("\n"); 

    
    printf("Tableau copie : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", copie[i]); 
    }
    printf("\n"); 

    return 0;
}

