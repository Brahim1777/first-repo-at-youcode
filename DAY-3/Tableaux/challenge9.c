#include <stdio.h> 

int main() {
    int tableau[5] = {1, 2, 3, 4, 5}; 
    int i; 

    
    for (i = 0; i < 5 / 2; i++) { 
        int temp = tableau[i]; 
        tableau[i] = tableau[5 - 1 - i]; 
        tableau[5 - 1 - i] = temp; 
    }

    
    for (i = 0; i < 5; i++) { 
        printf("%d ", tableau[i]);
    }
    
    printf("\n");
    return 0; 
}

