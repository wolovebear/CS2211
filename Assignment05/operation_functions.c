//
//  operation_funtions.c
//  Assignment05
//
//  Created by Lin Su on 15/12/5.
//  Copyright © 2015 Lin Su. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "operation_functions.h"

/**
 * Multiplication function
 */
complex_type multiplication(struct complex_tag c1, struct complex_tag c2)
{
    complex_type mult;
    double a1, a2, b1, b2;
    a1 = c1.real;
    a2 = c2.real;
    b1 = c1.imaginary;
    b2 = c2.imaginary;
    mult.real = a1 * a2 - b1 * b2;
    mult.imaginary = a2 * b1 + a1 * b2;
    return mult;
}

/**
 * Division function
 */
int division(struct complex_tag *c1, struct complex_tag *c2, struct complex_tag *cr)
{
    double a1, a2, b1, b2;
    a1 = c1->real;
    a2 = c2->real;
    b1 = c1->imaginary;
    b2 = c2->imaginary;
    
    if (a2 * a2 + b2 * b2 == 0)
        return -2;
    else
        cr->real = (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2);
    cr->imaginary = (a2 * b1 - a1 * b2) / (a2 * a2 + b2 * b2);
    return 0;
}

/**
 * Sum and difference function
 */
int sd(struct complex_tag c1, struct complex_tag c2, struct complex_tag **sum, struct complex_tag **dif)
{
    (*sum) = (struct complex_tag *) malloc(sizeof(struct complex_tag));
    (*dif) = (struct complex_tag *) malloc(sizeof(struct complex_tag));
    if (sum == 0 || dif == 0)
    {
        printf("Not enough memory\n");
        return -1;
    }
    else
    {
        double a1, a2, b1, b2;
        a1 = c1.real;
        a2 = c2.real;
        b1 = c1.imaginary;
        b2 = c2.imaginary;
        
        (**sum).real = a1 + a2;
        (**sum).imaginary = b1 + b2;
        (**dif).real = a1 - a2;
        (**dif).imaginary = b1 - b2;
        return 0;
    }
}

