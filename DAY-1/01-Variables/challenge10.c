#include <stdio.h> 
#include <math.h>  

int main() {
    double r;
    double volume;

    printf("Entrez le rayon de la sphere : ");
    scanf("%lf", &r); 
    volume = (4.0 / 3.0) * 3.141 * pow(r, 3); 

   
    printf("Le volume de la sphere est : %.2f\n", volume); // 

    return 0; 
}