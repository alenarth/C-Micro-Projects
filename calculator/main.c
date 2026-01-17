#include <stdio.h>

int main (){
    //There is going to be 3 float values and one operator. 
    //All operations are going to work with two numbers sharing the operation and then give the result.
    float num1, num2, result;
    int operator;

    printf("Type the first number: ");
    scanf("%f", &num1);

    printf("Type the second number: ");
    scanf("%f", &num2);

    printf("Select the operation: \n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");

    scanf("%d", &operator);

    switch (operator)
    {
    case 1:
        //Addition
        result = num1 + num2;
        printf("Result: %.2f\n", result);
        break;
    
    case 2:
        //Subtraction
        result = num1 - num2;
        printf("Result: %.2f\n", result);
        break;

    case 3:    
        //Multiplication
        result = num1 * num2;
        printf("Result: %.2f\n", result);
        break;

    case 4:    
        //Division
        if (num2 != 0){
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
        else {
            printf("It's not possible to divide something for 0!\n");
        }
        break;
    default:
        printf ("Invalid Operator.\n");
        break;
    }
    return 0;
}