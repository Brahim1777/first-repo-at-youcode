#include <stdio.h>

int main() {
    int nombre; 
    int somme = 0;
    int compteur = 0; 

    
    printf("Entrez une série de nombres positifs (terminez par 0) : \n");

   
    while (1) { 
        scanf("%d", &nombre);

        if (nombre == 0) {
            break; 
        }

        somme += nombre;
        compteur++; 
    }

    if (compteur > 0) {
        float moyenne = (float)somme / compteur; 
        printf("La moyenne des nombres est : %.2f\n", moyenne); 
    } else {
        printf("Aucun nombre n'a été entré.\n"); 
    }

    return 0; 
}
