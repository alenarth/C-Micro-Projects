#include <stdio.h>
#include <stdbool.h>

int main (){

    //if = Fazer algo 'se' uma determinada condição for verdadeira.

    //int age = 21;
    //printf("Enter your ag: ");
    //scanf("%d", &age);


    //if(age >= 65){
    //    printf("You are a senior");
    //}
    //else if(age >= 18){
    //    printf("You are an adult");
    //}
    //else if(age < 0){
    //    printf("You haven't been born yet");
    //}

    //else if(age == 0){
    //    printf("You are a newborn");
    //}

    //else{
    //    printf("You are a child");
    //}

    bool isStudent = true;

    if (isStudent == true){
        printf("You are a student");
    }
    else{
        printf("You are NOT a student");
    }



    return 0;
}