#include <stdio.h>

int main() {
    int age, car_type, accidents;
    double base_premium = 500.0;  
    double final_premium;

    
    printf("Enter the driver s age: ");
    scanf("%d", &age);

    printf("Enter the type of car (1 for sports, 2 for utility, 3 for family): ");
    scanf("%d", &car_type);

    printf("Enter the number of accidents in the last 5 years: ");
    scanf("%d", &accidents);

    
    if (age < 25) {
        final_premium = base_premium * 1.5;
    } else if (age <= 65) {
        final_premium = base_premium;
    } else {
        final_premium = base_premium * 1.2;
    }

    
    if (car_type == 1) {
        final_premium =final_premium * 2;  
    } else if (car_type == 2) {
        final_premium =final_premium * 1.2;  
    } else if (car_type == 3) {
        final_premium *= 1.1;  
    }

    
    if (accidents > 1) {
        final_premium *= 1.3;  
    }

    
    printf("The insurance premium is: %.2f euros\n", final_premium);

    return 0;
