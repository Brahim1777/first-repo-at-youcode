#include <stdio.h>
int main() {
    int n; 
    int i;
    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) { 
        printf("%d ", 2 * i); 
    }
    printf("\n"); 
    return 0; 
}