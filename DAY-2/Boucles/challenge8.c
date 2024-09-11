#include <stdio.h>

int main(){
    int f, a = 0, b = 1, next;
    int i;

    printf("Entrez un nombre : ");
    scanf("%d", &f);

    if (f == 0) {
        printf("F(0) = %d\n", a);
    } else if (f == 1) {
        printf("F(1) = %d %d\n", a, b);
    } else {
        printf("%d %d", a, b); 

        for ( i = 2; i < f; i++) { 
            next = a + b;
            printf(" %d", next); 
            a = b;
            b = next;
        }
    }
    
    return 0;
}
