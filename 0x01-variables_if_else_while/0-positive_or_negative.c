#!/bin/bash
#include <stdio.h>
#include <time/h>
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n == 0) 
	{ 
		printf (" The number is zero :%d\n ",n);
	
		else if (n > 0);
			 printf ("The number is positive :%d\n", n);
			 else print ( "The number is negative :%d\n",n); 
	}
return (0);
}
