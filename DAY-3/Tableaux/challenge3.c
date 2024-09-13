#include <stdio.h>

int main() {
    int n ;
    int i ;
    int soom=0;
    int T[n];

    printf("entrer la nombre d element :");
    scanf("%d",&n);
      
       for(i=0; i<n ; i++){
         printf("entrer l element %d",i+1);
         scanf("%d",T[i]);
         soom=soom+T[i];
       }
        printf("la soome de element et %d\n");
    return 0;   

  }