#include <stdio.h> 

int  Minimum(int a, int b) {
    
    if (a < b) {
        return a;
    } else {
        return b; 
    }
}

int main() {
    int num1, num2; 
    
    printf("Entrez le premier nombre: ");
    scanf("%d", &num1); 
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &num2); e

    printf("Le  Minimum %d et %d est %d\n", num1, num2,  Minimum(num1, num2));
    return 0; 
}
