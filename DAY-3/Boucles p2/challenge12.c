#include <stdio.h> 

int main() {
    int n; 
    printf("Entrez le nombre d'éléments: "); 
    scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    }

    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
               
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            }
        }
    }

    
    printf("Tableau trié: "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
    return 0;
}
