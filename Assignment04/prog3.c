//
//  prog3.c
//  prog3
//
//  Created by Lin Su on 15/11/14.
//  Copyright © 2015 Lin Su. All rights reserved.
//

#include <stdio.h>

//Create funciton
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies, int *lonnie);

int main(void) {
    
    //Prompt the user for a number to use
    int dollars, twenties, tens, fives, toonies, lonnie;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    
    //Call function
    pay_amount(dollars, &twenties, &tens, &fives, &toonies, &lonnie);
    
    //Print the result
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$2 bills: %d\n", toonies);
    printf("$1 bills: %d\n", lonnie);
    
    return 0;
}

//Define function
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies,int *ones)
{
    *twenties = dollars / 20;
    dollars %= 20;
    *tens = dollars / 10;
    dollars %= 10;
    *fives = dollars / 5;
    dollars %= 5;
    *toonies = dollars / 2;
    dollars %= 2;
    *ones = dollars;
}