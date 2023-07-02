/*
 ============================================================================
 Name        : EX2.c
 Author      : Karim Talaat
 Created on   : 30/6/2023
 Description : c program to check vowel or consonant.
 ============================================================================
 */
#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter an alphabet: ");
    scanf ("%c", &ch);
if (isalpha (ch))
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf ("%c is a vowel.", ch);
    }
    else 
{
    printf ("%c is a consonant.", ch);
}
}
else 
{
    printf ("you must enter a letter");
}
    return 0;
}