#include <stdio.h>

struct Rectangle {
    float longueur; 
    float largeur;  
};

int main() {
    struct Rectangle rect;
   printf("entrer longueur \n");
   scanf("%f",&rect.longueur);
    printf("entrer largeur \n");
   scanf("%f",&rect.largeur);
        

        float aire = rect.longueur * rect.largeur; 

    printf("L'aire du rectangle est: %.2f\n", aire); 
    return 0; 
}
