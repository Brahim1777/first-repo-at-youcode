#include <stdio.h> 

int main() {
    int n; 
    int somme = 0; 
    int i;

    printf("Entrez un nombre entier n: ");
    scanf("%d", &n); 

   
    for ( i = 1; i <= n; i++) { 
        somme =somme+i  ;
    }


    printf("La somme des %d premiers nombres naturels est: %d\n", n, somme); 

    return 0; 
}