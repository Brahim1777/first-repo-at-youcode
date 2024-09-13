#include <stdio.h> 

int maximum(int a, int b) {
    
    if (a > b) {
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
    scanf("%d", &num2); 

  
    printf("Le maximum entre %d et %d est %d\n", num1, num2, maximum(num1, num2));
    return 0; 
}



