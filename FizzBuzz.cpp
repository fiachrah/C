
#include "pch.h"
#include <stdio.h>
#include <iostream>

void main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0)) /*Fizz*/
		{
			printf("Fizz\n");
			continue; 
		}
		else if ((i % 3 != 0) && (i % 5 == 0)) /*Buzz*/
		{
			printf("Buzz\n");
			continue; 
		}
		else if ((i % 3 == 0) && (i % 5 == 0)) /* FizzBuzz*/
		{
			printf("FizzBuzz\n");
			continue; 
		}
		printf("%d\n", i);
	}
}

