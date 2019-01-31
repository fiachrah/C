#include "pch.h"
#include <iostream>
#include <stdio.h>


int main()
{
	
	int num = 0;
	double max = 0;
	double min = 999999999;
	double average, total = 0.0;
	double value[10];

	// Instructions for user

	printf("\nProgramn to calculate average, max and min of up to 10 floating point numbers. \nEnter up to 10 numbers. Enter <0.0> to end input>.\n");
	printf("_____________________________ \n\n");
	
	// Loop for entering numbers, identifying Max and Min and breaking at 0.0
	
	for (num = 0; num < 10;num++)
	{
		printf("#%d: ", num + 1);
		scanf_s("%lf", &value[num]);

		total = total + value[num];

		if (value[num] == 0.0)
		{
			break;
		}

		// max

		if (value[num] >= max)
		{
			max = (value[num]);
		}

		// min

		if (value[num] < min)
		{
			min = (value[num]);
		}

		
	}
	

	// Average calulation
	
	average = total / (num);
	

	// Displaying Max, Min and Average and ensuring that calculations are not carried cut using 0.0 as lone value
	
	if (num == 0)
	{
		printf("\nNo numbers were entered - quitting....\n");
	}
	else {

		printf("\nAverage = %.1lf, ", average);
		
		printf("Max = %.2lf, ", max);

		printf("Min = %.2lf", min);

		printf("\n");

	}
}