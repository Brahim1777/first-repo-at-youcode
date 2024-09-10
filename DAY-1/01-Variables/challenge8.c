#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c; 
    double moyenne_geometrique; 

    
    printf("Entrez le premier nombre: ");
    scanf("%lf", &a); 

    printf("Entrez le deuxieme nombre: ");
    scanf("%lf", &b); 
    printf("Entrez le troisieme nombre: ");
    scanf("%lf", &c);
    moyenne_geometrique = pow(a * b * c, 1.0/3.0); 

    printf("La moyenne geometrique de %.2f, %.2f et %.2f est %.2f\n", a, b, c, moyenne_geometrique); 
    return 0; 
