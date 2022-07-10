//
// Created by hamza on 08/07/22.
//

/*
 * Modify the temperate conversion program to print a heading
 * above the table
 */
#include <stdio.h>

int main()
{
    printf("A program to convert temperate from fahrenheit to celsius:\n");
    float fahr, celsius;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    fahr = lower;
    while(fahr<=upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr+=step;
    }
}