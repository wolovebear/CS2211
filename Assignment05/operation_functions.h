//
//  operation_funtions.h
//  Assignment05
//
//  Created by Lin Su on 15/12/5.
//  Copyright © 2015 Lin Su. All rights reserved.
//

#ifndef OPERATION_FUNCTONS_H
#define OPERATION_FUNCTONS_H

/**
 * Declaration of complex_tag structure and complex_type type
 */
struct complex_tag
{
    double real;
    double imaginary;
};

typedef struct
{
    double real;
    double imaginary;
}complex_type;

complex_type multiplication(struct complex_tag c1, struct complex_tag c2);
int division(struct complex_tag *c1, struct complex_tag *c2, struct complex_tag *cr);
int sd(struct complex_tag c1, struct complex_tag c2, struct complex_tag **sum, struct complex_tag **dif);


#endif /* operation_funCtions_h */
