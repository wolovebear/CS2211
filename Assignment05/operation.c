//
//  operation.c
//  Assignment05
//
//  Created by Lin Su on 15/12/5.
//  Copyright © 2015 Lin Su. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "operation_functions.h"

int main(void)
{
    /**
     * Variable declarations
     */
    struct complex_tag c1;
    struct complex_tag c2;
    complex_type m;
    struct complex_tag *d1 = malloc((sizeof(struct complex_tag)));
    struct complex_tag *s, *d;
    
    /**
     * The user is prompted in the real and imaginary portions for two of the complex numbers
     */
    printf("Please enter the real portion for the first complex number: ");
    scanf("%lf", &c1.real);
    printf("Please enter the imaginary portion for the first complex number: ");
    scanf("%lf", &c1.imaginary);
    printf("Please enter the real portion for the second complex number: ");
    scanf("%lf", &c2.real);
    printf("Please enter the imaginary portion for the second complex number: ");
    scanf("%lf", &c2.imaginary);
    
    
    m = multiplication(c1, c2);
    division(&c1, &c2, d1);
    sd(c1, c2, &s, &d);
    
    
    /**
     * Prints the multiplication and division results of the two numbers
     */
    printf("The result of the multiplication of the two numbers is %lf\n", (m.real + m.imaginary));
    printf("The result of the division of the two numbers is %lf\n", (d1->real + d1->imaginary));
    printf("The result of the sum of the two numbers is %lf\n", (s->real + s->imaginary));
    printf("The result of the difference of the two numbers is %lf\n", (d->real + d->imaginary));
    
    return 0;
}
