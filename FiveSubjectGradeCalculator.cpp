// FiveSubjectGradeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

void main()
{
	int engMark, freMark, matMark, iriMark, sciMark;
	float average;
	int highMark = 0;
	int index = 0;

	printf("\n");

	// Entering Marks

	printf("Enter English Mark: ");
	scanf_s("%d", &engMark);

	printf("Enter French Mark: ");
	scanf_s("%d", &freMark);

	printf("Enter Maths Mark: ");
	scanf_s("%d", &matMark);

	printf("Enter Irish Mark: ");
	scanf_s("%d", &iriMark);

	printf("Enter Science Mark: ");
	scanf_s("%d", &sciMark);

	// Average Mark

	average = ((float)engMark + (float)freMark + (float)matMark + (float)iriMark + (float)sciMark) / 5;

	printf("\n");

	printf("Average Mark = %.2f \n", average);

	// Subjects Passed

	printf("Passes: ");

	if (engMark >= 40)
	{
		printf("English, ");
	}
	if (freMark >= 40)
	{
		printf("French, ");
	}
	if (matMark >= 40)
	{
		printf("Maths, ");
	}
	if (iriMark >= 40)
	{
		printf("Irish, ");
	}
	if (sciMark >= 40)
	{
		printf("Science, ");
	}

	printf("\n");

	// Subjects Failed

	printf("Fails: ");

	if (engMark < 40)
	{
		printf("English, ");
	}
	if (freMark < 40)
	{
		printf("French, ");
	}
	if (matMark < 40)
	{
		printf("Maths, ");
	}
	if (iriMark < 40)
	{
		printf("Irish, ");
	}
	if (sciMark < 40)
	{
		printf("Science, ");
	}

	printf("\n");

	// Highest Mark

	if (engMark >= highMark)
	{
		highMark = (engMark);
		index = 1;
	}
	if (freMark >= highMark)
	{
		highMark = (freMark);
		index = 2;
	}
	if (matMark >= highMark)
	{
		highMark = (matMark);
		index = 3;
	}
	if (iriMark >= highMark)
	{
		highMark = (iriMark);
		index = 4;
	}
	if (sciMark >= highMark)
	{
		highMark = (sciMark);
		index = 5;
	}


	if (index == 1)
	{
		printf("Highest Mark = %.2d in English \n", highMark);
	}
	if (index == 2)
	{
		printf("Highest Mark = %.2d in French \n", highMark);
	}
	if (index == 3)
	{
		printf("Highest Mark = %.2d in Maths \n", highMark);
	}
	if (index == 4)
	{
		printf("Highest Mark = %.2d in Irish \n", highMark);
	}
	if (index == 5)
	{
		printf("Highest Mark = %.2d in Science \n", highMark);
	}

	printf("\n");


}
