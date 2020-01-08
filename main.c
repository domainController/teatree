#include <stdio.h>
int main ()
{ 
	int i;
	for (i = 1; i <= 100 ; i = i+1) 
	{
	      if (i % 15 == 0) 
	      {printf("fizzbuzz\n");}
              else if (i % 5 == 0) 
	      {printf("buzz\n");}
	      else if (i % 3 == 0) 
	      {printf("fizz\n");}
	      else 
	      {printf("%d\n", i);}	
	}
}	
/*
 * travail d'indentation bibliotheque central dublin 8 jan 2020
 * gcc -E 
 *https://www.youtube.com/watch?v=-iJqEYuNhD8&list=PLxeJU39M7tLHXw0G-2cCgR4RF0tT3xFH4&index=2&t=232s
 *
 */

