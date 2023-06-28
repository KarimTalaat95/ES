/*
 ============================================================================
 Name        : EX7.c
 Author      : Karim Talaat
 Created on   : 28/6/2023
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b;
	printf ("Enter value of a:  ");
	fflush (stdout);
	scanf ("%f",&a);
	printf ("Enter value of b:  ");
	fflush (stdout);
	scanf ("%f",&b);
	a= a*b;
	b=a/b;
	a=a/b;
	printf ("After swapping,value of a: %f \n",a);
	printf ("After swapping,value of b: %f ",b);
	return 0;
}



