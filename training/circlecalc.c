#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; //variável constante, não pode ser alterada.

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2); //Área é igual à Pi vezes raio ao quadrado.
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lfcm\n", area);
    printf("Surface Area: %.2lfcm\n", surfaceArea);
    printf("Volume: %2.lfcm\n", volume);




    return 0;
}