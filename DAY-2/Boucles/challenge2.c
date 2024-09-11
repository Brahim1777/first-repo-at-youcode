#include <stdio.h>

int main(){
    int nombre,f=1;
    int i;
    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    for ( i = 0; i < nombre; i++){
        f = f+f * i;
    }
        printf("%d! = %d",nombre,f);


    return 0;
}




