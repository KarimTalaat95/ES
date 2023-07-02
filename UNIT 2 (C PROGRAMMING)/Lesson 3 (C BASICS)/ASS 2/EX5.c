/*
 ============================================================================
 Name        : EX5.c
 Author      : Karim Talaat
 Created on   : 30/6/2023
 Description : c program to check whether the character is alphabet or not.
 ============================================================================
 */
#include <stdio.h>
#include <ctype.h>

int main(void)

{
    char c;
    printf ("Enter a character: ");
    scanf ("%c",&c);
    if (isalpha(c))
    {
        printf ("%c is an alphabet",c);
    }
    else 
    {
        printf ("%c is not an alphabet",c);
    }
    return 0;
}