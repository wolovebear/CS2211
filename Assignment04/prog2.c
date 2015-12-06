//
//  prog2.c
//  Prog2
//
//  Created by Lin Su on 15/11/14.
//  Copyright © 2015 Lin Su. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int n = 0;
    
    //Prompt the user for a number to use
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    //Validate that the number is a positive odd integer
    while (n%2 == 0 || n < 1 || n > 13){
        printf("Invalid input. Please input an odd integer between 1 and 13: ");
        scanf("%d", &n);
    }
    
    //Initialize the start of the array
    int col = n / 2;
    int row = 0;
    
    //Initialize a 2D array for the square
    int square[n][n], *sq;
    int i = 0, j = 0;
    sq = square;
    
    //Initialize the array
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            *(sq + (n * i) + j) = 0;
        }
    }
    
    // Import number between 1 and n*n to array[n][n]
    for (i = 1; i <= n*n; i++){
        
        //Wrap the column around if it is outside the array
        if (col == n){
            col=0;
        }
        
        //Wrap the row around if it is outside the array
        if (row == -1){
            row=n-1;
        }
        
        //Check if the spot is already filled it
        if (*(sq + ( n * row) + col) != 0) {
            //If it is filled go to the spot beneath the last entry
            row += 2;
            col -= 1;
            
            //Wrap the column if it is outside the array
            if (col < 0){
                col=n-1;
            }
            
            //Wrap the row if it is outside the array
            if (row >= n){
                row=1;
            }
        }
        
        //Insert the current value into the proper spot in the array
        *(sq + ( n * row) + col) = i;
        
        //Move to the next column to the right
        col += 1;
        
        //Move to the next row up
        row -= 1;
        
    }
    
    //Print the square
    for (i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            printf("%d\t", *(sq + (n * i) + j));
        }
        printf("\n");
    }

    
    return 0;
}
