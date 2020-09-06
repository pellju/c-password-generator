#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Defining the mininum and maximum amount of password generated:
#define MIN_LENGTH 12
#define MAX_LENGTH 64


int main (){

    //The first thing is to check that MIN_LENGTH < MAX_LENGTH and MIN_LENGTH > 0
    if (MIN_LENGTH > MAX_LENGTH || MIN_LENGTH < 1) {
        printf("There is at least a one problem with the given values of MIN_LENGTH or MAX_LENGTH, please check them.\n");
        return 1;
    }

    char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZÅÄÖabcdefghijklmnopqrstuvwxyzåäö1234567890 -_.:,;~\\/&%$#'!?"; //Had to be defined separately since ANSI doesn't include 'ÅÄÖåäö'
    int amount;
    printf("Please enter the amount of letters for the password: ");
    scanf("%d",&amount);
    //To check if the given value is int or not and >MIN_LENGTH and <MAX_LENGTH:
    if (amount > MAX_LENGTH || amount < MIN_LENGTH){
        printf("There is a problem with the given value.\n");
        return 1;
    }
    printf("Your password is");
    for (int i=0; i < amount; i++){
        int index = rand() % strlen(letters);
        printf("%c",letters[index]);
    }
    printf("\n");
    return 0;
}