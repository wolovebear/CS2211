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

int main(int argc, char *argv[])
{
    /**
     * Variable declarations
     */
    struct complex_tag c1;
    struct complex_tag c2;
    
    /**
     * Variable initiallized and check arguments number
     */
    if(argc != 5){
        printf("Error argument!!!\n");
		printf("The argument form should be: ./operation number number number number\n");
        return 1;
    }
    else {
        c1.real = strtod(argv[1],NULL);
        c1.imaginary = strtod(argv[2],NULL);
        c2.real = strtod(argv[3],NULL);
        c2.imaginary = strtod(argv[4],NULL);
    }
    
    /**
     * Enter the real and imaginary portions for two of the complex numbers
     */
    c1.real = atof(argv[1]);
    c1.imaginary = atof(argv[2]);
    c2.real = atof(argv[3]);
    c2.imaginary = atof(argv[4]);
    
    /**
     * Prints the two numbers to check
     */
    printf("The first complex number is: %lf + i(%lf) \n",atof(argv[1]),atof(argv[2]));
    printf("The second complex number is: %lf + i(%lf) \n",atof(argv[3]),atof(argv[4]));
    
    complex_type m;
    struct complex_tag *d = malloc((sizeof(struct complex_tag)));
    struct complex_tag *sum, *dif;
    
    /**
     * Multiplication
     */
    m = multiplication(c1, c2);
    
    /**
     * Division
     */
    division(&c1, &c2, d);
    
    /**
     * Sum and difference
     */
    sd(c1, c2, &sum, &dif);
    
    
    /**
     * Prints the results of the two numbers
     */
    printf("==========================Result===========================\n");
    printf("The result of the multiplication of the two numbers is %lf + i(%lf)\n", m.real , m.imaginary);
    printf("The result of the division of the two numbers is %lf + i(%lf)\n", d->real , d->imaginary);
    printf("The result of the sum of the two numbers is %lf + i(%lf)\n", sum->real , sum->imaginary);
    printf("The result of the difference of the two numbers is %lf + i(%lf)\n", dif->real , dif->imaginary);
    
    return 0;
}
