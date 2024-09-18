#include <stdio.h>

struct Cercle {
    float rayon; 
};


float calculerAire(struct Cercle c) {
    return 3.14 * c.rayon * c.rayon; 
}

int main() {
    struct Cercle monCercle;
    monCercle.rayon = 5.0; 

   
    float aire = calculerAire(monCercle);
    printf("L'aire du cercle est: %.2f\n", aire); 

    return 0; 
