#include <stdio.h> 
#include <math.h>  


int main() {
      float a, b, c; 
      float d; 
     float x1, x2; 

    
    printf("Entrez les coefficients a, b et c de l'equation ax^2 + bx + c = 0 : ");
    scanf("%f %f %f", &a, &b, &c); 

    
    d  = b * b - 4 * a * c; 

    if (d > 0) { 
        
        x1 = (-b + sqrt(d)) / (2 * a); 
        x2 = (-b - sqrt(d)) / (2 * a); 
        printf("Les solutions sont : x1 = %.2f et x2 = %.2f\n", x1, x2); 
    } else if (d  == 0) { 
      
        x1 = -b / (2 * a); 
        printf("La solution unique est : x = %.2f\n", x1); 
    } else { 
        printf("Pas de solutions reelles.\n"); 
    }

    return 0; 
}