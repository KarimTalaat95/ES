/*
 ============================================================================
 Name        : EX5.c
 Author      : Karim Talaat
 Created on   : 28/6/2023
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char character;
	printf("Enter a character:  ");
	fflush (stdout);
	scanf ("%c", &character);
	printf ("Ascii value of %c: %d",character,character );
	return 0;
}



