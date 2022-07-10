//
// Created by hamza on 08/07/22.
//
#include <stdio.h>

int main()
{
    printf("A program to convert temperature from Celsius to Fahrenheit\n");
    float fahr, celsius;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;

    celsius=lower;
    while(celsius<=upper){
        fahr = 32 + (celsius*1.8);
        printf("%3.0f %6.1f\n", celsius,fahr);
        celsius+=step;
    }
}