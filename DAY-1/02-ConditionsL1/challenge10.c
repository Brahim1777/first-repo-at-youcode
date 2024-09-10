  #include <stdio.h> 

int main() {
    int jour, mois, annee; 
    char moisNom[20]; 
    
    printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee); 

    
    if (mois == 1) {
        sprintf(moisNom, "Janvier");
    } else if (mois == 2) {
        sprintf(moisNom, "Fevrier"); 
    } else if (mois == 3) {
        sprintf(moisNom, "Mars"); 
    } else if (mois == 4) {
        sprintf(moisNom, "Avril"); 
    } else if (mois == 5) {
        sprintf(moisNom, "Mai"); 
    } else if (mois == 6) {
        sprintf(moisNom, "Juin"); 
    } else if (mois == 7) {
        sprintf(moisNom, "Juillet"); 
    } else if (mois == 8) {
        sprintf(moisNom, "Aoet"); 
    } else if (mois == 9) {
        sprintf(moisNom, "Septembre"); 
    } else if (mois == 10) {
        sprintf(moisNom, "Octobre");
    } else if (mois == 11) {
        sprintf(moisNom, "Novembre"); 
    } else if (mois == 12) {
        sprintf(moisNom, "Decembre"); 
    } else {
        printf("Mois invalide\n"); 
        return 1; 
    }


    printf("%d-%s-%d\n", jour, moisNom, annee); 
    return 0; 
}


   