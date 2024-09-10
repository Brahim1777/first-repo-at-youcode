#include <stdio.h> 


int main() {
    int annee; 
    int mo, jo, he, mi, se;
    char Q;
    
    printf("Entrez une annee: ");
    scanf("%d", &annee); 
    printf("Vers quoi voulez-vous convertir  ");
    scanf("%s"&,Q);
switch(Q){
   case"mois":
    mo = annee * 12;
      printf("Pour l'annee %d:\n", annee); 
      break;
   case "jours":
    jo = annee * 365;
      printf("Mois: %d\n", mo); 
      break;
   case"heures":
    he = jo * 24;
      printf("Jours: %d\n", jo);
      break; 
   case"minutes":
    mi = he * 60;
       printf("Heures: %d\n", he);
       break;   
   case"secondes":
    se = mi * 60; 
       printf("Secondes: %d\n", se);
       break;
       default:
       pointf("     ");
   }

    return 0; 
}