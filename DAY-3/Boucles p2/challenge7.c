#include <stdio.h> 

int main() { 
    int n;
    printf("Entrez le nombre de termes de la suite de Fibonacci : "); 
    scanf("%d", &n); 

    int a = 0, b = 1; 
    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n); 

    for (int i = 0; i < n; i++) { 
        if (i == 0) {
            printf("%d ", a); 
        } else if (i == 1) { 
            printf("%d ", b); 
        } else { 
            int next = a + b;
            printf("%d ", next); 
            a = b;
            b = next; 
        }
    }
    printf("\n");
    return 0;
}
