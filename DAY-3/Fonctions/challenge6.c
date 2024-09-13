#include <stdio.h>


int fibonacci(int n) {
    
    if (n <= 0) {
        return 0;
    }
   
    else if (n == 1) {
        return 1; 
    }
    
    int a = 0; 
    int b = 1; 
    int c; 

    for (int i = 2; i <= n; i++) {
        c = a + b; 
        a = b; 
        b = c;
    }
    return c; 
}

int main() {
    int n;
    printf("Entrez un entier pour obtenir le n-ième terme de Fibonacci: ");
    scanf("%d", &n); 

  
    printf("Le %d-ième terme de Fibonacci est: %d\n", n, fibonacci(n));
    return 0; 
}
