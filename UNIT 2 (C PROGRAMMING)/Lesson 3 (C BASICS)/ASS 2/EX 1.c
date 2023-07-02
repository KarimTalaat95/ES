/*
 ============================================================================
 Name        : EX1.c
 Author      : Karim Talaat
 Created on   : 29/6/2023
 Description : Write c program to check whether a number is even or odd.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int y=1;
	do
	{
		int n,x;
		printf ("Enter an integer you want to check:");
		fflush (stdout);
		x=scanf (" %d", &n);
		while(getchar() != '\n');
		if (x==1)
		{
			if (n%2==0)
			{ printf ("%d is even number\r\n", n);

			}
			else
			{
				printf ("%d is odd number\r\n", n);
			}
		}
		else
		{
			printf ("You must enter a number!\r\n");

		}

	}
	while (y==1);
	return 0;

}

