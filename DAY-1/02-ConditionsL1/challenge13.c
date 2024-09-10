#include <stdio.h>

void pointComparaison(int x1, int y1, int x2, int y2, int xp, int yp){
    if(xp >= (x1 < x2 ? x1 : x2) && xp <= (x1 > x2 ? x1 : x2) && yp >= (y1 < y2 ? y1 : y2) && yp <= (y1 > y2 ? y1 : y2)){
        printf("Le point se trouve dans le segement.");
    }else{
        printf("Le point se ne trouve pas dans le segement.");
    }
}

int main() {
    int x1, y1, x2, y2, xp, yp;

    printf("Entrer les cordonées du premières extrémités du segment (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Entrer les cordonées du deuxièmes extrémités du segment (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    
    printf("Entrer les cordonées des points (xp yp): ");
    scanf("%d %d", &xp, &yp);

    pointComparaison(x1, y1, x2, y2, xp, yp);
    return 0;
}