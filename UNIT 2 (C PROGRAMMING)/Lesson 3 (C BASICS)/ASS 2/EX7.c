/*
 ============================================================================
 Name        : EX7.c
 Author      : Karim Talaat
 Created on   : 2/7/2023
 Description : C Program to Find Factorial of a Number
 ============================================================================
 */
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}