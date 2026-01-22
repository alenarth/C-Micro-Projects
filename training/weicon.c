#include <stdio.h>

int main(){

    // Weight Converter Program

    int choice = 0;
    float pounds = 0.0f;
    float killograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        // Kilograms to pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", killograms);
        pounds = killograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", killograms, pounds);
    }
    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", pounds);
        killograms = pounds * 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, killograms);
    }
    else{
        printf("Invalid choice! Please enter 1 or 2!\n");
    }

    return 0;
}