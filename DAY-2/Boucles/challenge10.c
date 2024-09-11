#include <stdio.h>

int main(){
    int n ,e = 0;
    int i;

    printf("Entrez une nombre : ");
    scanf("%d",&n);

    for( i = 1; i <= n ; i++){
        e =e+ i; 
    }
        printf("N = %d ",e);

    return 0;
}