#include <stdio.h> 

struct Etudiant {
    char nom[50]; 
    char prenom[50];
    float notes;
};

int main() {
    struct Etudiant etu1; 
     printf("entrer nom \n");
    scanf("%s",& etu1.nom);
    printf("entrer prenom \n");
    scanf("%s",& etu1.prenom);
      for(int i=0;i<5;i++){
          printf("entrer la notes %d \n",i+1);
          scanf("%f", &etu1.notes);

      }

    
    printf("Nom: %s\n", etu1.nom); 
    printf("Prénom: %s\n", etu1.prenom);
    printf("Notes: "); 
    for (int i = 0; i < 5; i++) { 
        printf("notes %d: %.2f \n",i+1, etu1.notes);
    }
    printf("\n");

    return 0;

}
