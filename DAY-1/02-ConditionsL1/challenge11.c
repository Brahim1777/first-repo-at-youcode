#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {
   
    const char *jours[] = {
        "Lundi", 
        "Mardi", 
        "Mercredi", 
        "Jeudi", 
        "Vendredi", 
        "Samedi", 
        "Dimanche"
    };
    srand(time(NULL)); 
    int j = rand() % 7; 
    printf("Jour aleatoire de la semaine : %s\n", jours[j]); 
    return 0; 
}