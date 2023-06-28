/*
 ============================================================================
 Name        : EX4.c
 Author      : Karim Talaat
 Created on   : 28/6/2023
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float p(float a, float b)
{
	return (a*b);
}

int main()
{
	float a ,b ;
	printf ("Enter two numbers:   ");
	fflush (stdout);
	scanf ("%f \n%f", &a,&b);
	float product=p(a, b);
	printf ("product: %f", product);

}

