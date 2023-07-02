/*
 ============================================================================
 Name        : EX3.c
 Author      : Karim Talaat
 Created on   : 30/6/2023
 Description : c program to find largest of three numbers.
 ============================================================================
 */
#include <stdio.h>

int main(void) 
{
    float x,y,z;
    printf ("Enter three numbers: ");
    scanf ("%f \n %f \n %f", &x,&y,&z);
    switch (x>y && x>z ? 1: (y>x && y>z ? 2: 3))
    {
        case 1 : 
        printf ("The largest number: %f ",x);
        break;
        case 2 : 
        printf ("The largest number: %f ",y);
        break;
        case 3 : 
        printf ("The largest number: %f ",z);
        break;
    }
    return 0;
}