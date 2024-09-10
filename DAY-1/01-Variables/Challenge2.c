#include <stdio.h> 

int main() {
    float c; 
    float k;  

   
    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &c); 

    k = c + 273.15;
    
    printf("La temperature en Kelvin est : %.2f\n", k); 

    return 0; 
    }

