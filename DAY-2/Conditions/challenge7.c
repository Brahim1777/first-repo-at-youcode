#include <stdio.h> 

int main() {
    float r;  
    int d,sf;

    printf("Entrez revenu annuel (en euros) : ");
    scanf("%f", &r); 

    printf("Entrez statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d", &sf); 

    printf("Entrez deductions (en euros) : ");
    scanf("%d", &d); 

    if (r <= 20000)
    {
          printf("La tranche d imposition : 5%%\n");
    }
    else if (r > 20000 && r <= 50000)
    {
          printf("La tranche d imposition : 10%%\n");
    }
    else{
          printf("La tranche d imposition : 20%%\n");
    }

    if (sf == 1)
    {
          printf("Deduction de 1 000 euros");
    }
    else if (sf == 2)
    {
          printf("Deduction de 2 000 euros");
    }
    else{
          printf("Deduction de 3 000 euros");
    }

     return 0;
}

