#include <stdio.h> 

int main() {
    int n; 
    int i;
    int p;
    printf("Entrez un entier n: "); 
    scanf("%d", &n);   


    for ( i = 2; i <= n; i++) {
         p = 1; 

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { 
                p = 0; 
            }
        }

       
        if (p) {
            printf("%d ", i); 
        }
    }

    printf("\n"); 
    return 0; 
}
