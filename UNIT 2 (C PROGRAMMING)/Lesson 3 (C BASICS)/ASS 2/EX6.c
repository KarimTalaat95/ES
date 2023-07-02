/*
 ============================================================================
 Name        : EX6.c
 Author      : Karim Talaat
 Created on   : 1/7/2023
 Description : Write c program to check whether a number is even or odd.
 ============================================================================
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter an Integer: ");
    scanf ("%d",&n);
    if (n>=0)
    {
    n=n*(n+1)/2;
    printf ("sum = %d",n);
}
else
{
    printf ("you must enter a positive integer");
}
    return 0;
}
