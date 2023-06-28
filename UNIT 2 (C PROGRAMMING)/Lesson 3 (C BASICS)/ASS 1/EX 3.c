/*
 ============================================================================
 Name        : EX3.c
 Author      : Karim Talaat
 Created on   : 28/6/2023
 Description : Write C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int x,y;
	printf ("Enter the first number: ");
	fflush (stdout);
	scanf ("%d", &x);
	printf ("Enter the second number: ");
	fflush (stdout);
	scanf ("%d", &y);
	printf ("Sum= %d", x+y);
	return 0;

}
