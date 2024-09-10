#include <stdio.h> 

int main() {
    char nom[50]; 
    char prenom[50]; 
    int age; 
    char sexe; 
    char email[100]; 

    
    printf("Entrez votre nom: ");
    scanf("%s", nom); 

    printf("Entrez votre prenom: ");
    scanf("%s", prenom); 

    printf("Entrez votre age: ");
    scanf("%d", &age); 
    
    printf("Entrez votre sexe (M/F): ");
    scanf(" %c", &sexe); 

    printf("Entrez votre adresse email: ");
    scanf("%s", email); 


    printf("\nInformations personnelles:\n");
    printf("Nom: %c\n", nom); 
    printf("Prenom: %c\n", prenom); 
    printf("Age: %d\n", age); 
    printf("Sexe: %c\n", sexe); 
    printf("Email: %c\n", email); 
    return 0; 
}


