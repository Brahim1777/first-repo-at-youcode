#include <stdio.h> 

struct Personne {
    char nom[50];  
    char prenom[50];
    int age;
};

int main() {
    struct Personne personne1; 
    printf("entrer nom");
    scanf("%s",& personne1.nom);
    printf("entrer prenom");
    scanf("%s",& personne1.prenom);
    printf("entrer prenom");
    scanf("%d",& personne1.age);

   
    printf("Nom: %s\n", personne1.nom);
    printf("Prénom: %s\n", personne1.prenom); 
    printf("Âge: %d\n", personne1.age);

    return 0;
}

