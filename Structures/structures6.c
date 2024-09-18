#include <stdio.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    int n = 4;
    struct Product products[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the name of product number %d: ", i + 1);
        scanf("%s", products[i].name);

        printf("Enter the price of product number %d: ", i + 1);
        scanf("%f", &products[i].price);

        printf("Enter the quantity of product number %d: ", i + 1);
        scanf("%d", &products[i].quantity);
    }

    printf(" Product Information --\n");
    for (int i = 0; i < n; i++) {
        printf("Product %d:\n", i + 1);
        printf("Name: %s\n", products[i].name);
        printf("Price: %.2f$\n", products[i].price);
        printf("Quantity: %d\n\n", products[i].quantity);
    }

    return 0;
}

