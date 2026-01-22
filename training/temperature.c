#include <stdio.h>

int main(){

    //Temperature Conversion Program

    int choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Select an option below:\n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    printf("Choose 1 or 2:\n");
    scanf("%d", &choice);

    

    if (choice == 1){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit", celsius, fahrenheit);
    }
    else if (choice == 2){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celcius", fahrenheit, celsius);
    }
    else{
        printf("Invalid Sintax");
    }
    
    



    return 0;
}