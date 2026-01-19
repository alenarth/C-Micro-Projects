#include <stdio.h>
#include<string.h>

int main(){

    //Shopping Cart
        //first define the variables you will use.
        //We need items to buy. Their price and how many.

    char item[50] = ""; //Defini que cada item só pode ter no máximo 50 caracteres.
    float price = 0.0f; //Estou indicando que é uma variavel float e não pode ser usada como double de jeito nenhum;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);//scanf não consegue ler espaços em branco. Então, para nomes compostos e etc, usamos fgets.
                                    //sizeof é para que ele já saiba automaticamente o numero de chars da variável item, que no caso é 50 ao invés de eu ter que ficar trocando manualmente.
                                    //stdin é para indicar que o fgets é do tipo standard input;
    item[strlen(item) - 1] = '\0'; //Remove espaços em branco do input.

    printf("What is the price for each?: ");
    scanf("%f", &price); //& é usado para indicar o endereço do operador. Quer dizer que está apontando para o endereço price.

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("The total is: %C%.2f", currency, total); //.2 pois quero apenas 2 digitos depois do decimal.



    return 0;
}