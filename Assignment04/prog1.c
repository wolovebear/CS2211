//
//  Prog1.c
//  Prog1
//
//  Created by Lin Su on 15/11/14.
//  Copyright © 2015 Lin Su. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>	
#include <math.h>

int main(void) {
    
    srand((unsigned) time(NULL));
    
    int n = 1;
    int inside = 0;
    double pi = 0;
    
    //Prompt the user for a number to use
    printf("Please enter a positive integer to compute: ");
    scanf("%d", &n);
    
    //Validate that the number is a positive integer
    while (n<1){
        printf("Invalid input. Please enter a positive integer again: ");
        scanf("%d", &n);
    }
    
    int i;
    
    //Compute the number of sample points specified by the user
    for (i = 0; i < n; i++){
        
        //Generate a random value between 0 and 1 to x
        double x = (double)rand()/(double)RAND_MAX;
        
        //Generate a random value between 0 and 1 to y
        double y = (double)rand()/(double)RAND_MAX;
        
        //Compute the radius of (x,y)
        double r =  sqrt((x * x)+(y * y));
        
        //If the random point is in the unit circle, increment the counter
        if (r <= 1){
            inside += 1;
        }
    }
    
    //Compute the value of pi using the given formula
    pi = 4 * ((double)inside/(double)n);
    
    //Print the result
    printf("After %d times compute, the value of Pi = %e\n", n, pi);
    
    return 0;
    
    
}
