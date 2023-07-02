/*
 ============================================================================
 Name        : EX4.c
 Author      : Karim Talaat
 Created on   : 30/6/2023
 Description : c program to check if a number is positive or negative.
 ============================================================================
 */
#include <stdio.h>

int main(void)
{
    float x;
    printf ("Enter a number: ");
    scanf ("%f",&x);
    switch (x>0 ? 1: x<0 ? 2: 3)
    {
        case 1:
        printf ("%.2f is positive", x);
        break;
        case 2:
        printf ("%.2f is negative", x);
        break;
        case 3:
        printf ("you entered zero.");
        break;
    }
    return 0;
}