// AreaCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "stdio.h"
#define PI 3.14159

void main()
{

	int shape = 0;
	float baseWidth, topWidth, verHeig, radius, angle, area;


	//Start Screen

	printf("\n");
	printf("Area Calculator \n");

	printf("\n");

	printf("1 <Triangle> \n");
	printf("2 <Square> \n");
	printf("3 <Rectangle> \n");
	printf("4 <Parallelogram> \n");
	printf("5 <Trapezoid> \n");
	printf("6 <Circle> \n");
	printf("7 <Ellipse> \n");
	printf("8 <Sector> \n");
	printf("\n");

	//User Input

	printf("Enter Choice: ");
	scanf_s("%d", &shape);

	while (shape > 0)
	{
		//Triangle

		if (shape == 1)
		{
			printf("Enter Base Width: ");
			scanf_s("%f", &baseWidth);

			printf("Enter Vertical Height: ");
			scanf_s("%f", &verHeig);


		}

		//Square

		else if (shape == 2)
		{
			printf("Enter Width: ");
			scanf_s("%f", &baseWidth);
		}

		//Rectangle 

		else if (shape == 3)
		{
			printf("Enter Base Width: ");
			scanf_s("%f", &baseWidth);

			printf("Enter Vertical Height: ");
			scanf_s("%f", &verHeig);
		}

		//Parallelogram

		else if (shape == 4)
		{

			printf("Enter Base Width: ");
			scanf_s("%f", &baseWidth);

			printf("Enter Vertical Height: ");
			scanf_s("%f", &verHeig);
		}

		//Trapezoid

		else if (shape == 5)
		{
			printf("Enter Top Width: ");
			scanf_s("%f", &topWidth);

			printf("Enter Base Width: ");
			scanf_s("%f", &baseWidth);

			printf("Enter Vertical Height: ");
			scanf_s("%f", &verHeig);
		}

		//Circle

		else if (shape == 6)
		{
			printf("Enter Radius: ");
			scanf_s("%f", &radius);
		}

		//Ellipse

		else if (shape == 7)
		{
			printf("Enter Major Radius: ");
			scanf_s("%f", &baseWidth);

			printf("Enter Minor Radius: ");
			scanf_s("%f", &verHeig);

		}

		//Sector

		else if (shape == 8)
		{
			printf("Enter Radius: ");
			scanf_s("%f", &radius);

			printf("Enter Angle: ");
			scanf_s("%f", &angle);

		}


		//Area Calculation

			//Triangle

		if (shape == 1)
		{
			area = (0.5 * baseWidth * verHeig);

		}

		//Square

		if (shape == 2)
		{
			area = (baseWidth * baseWidth);

		}

		//Rectangle

		if (shape == 3)
		{
			area = (baseWidth * verHeig);

		}

		//Parallelogram

		if (shape == 4)
		{
			area = (baseWidth * verHeig);

		}

		//Trapezoid

		if (shape == 5)
		{
			area = (0.5 * (baseWidth + topWidth) * verHeig);

		}

		//Circle

		if (shape == 6)
		{
			area = (PI * radius * radius);

		}

		//Ellipse

		if (shape == 7)
		{
			area = (PI * verHeig * baseWidth);

		}

		//Sector

		if (shape == 8)
		{
			area = (0.5 * radius * radius * angle);

		}

		//Area Display

		//if (shape != 1 || shape != 2 || shape != 3 || shape != 4 || shape != 5 || shape != 6 || shape != 7 || shape != 8)
		//{
		//	printf("\n");
		//	printf("Incorrect value entered!");
		//	printf("\n");
		//	printf("\n");

		//}
		//else
		//{
			printf("Area = %.2f", area);
			printf("\n");
			printf("%d", &shape);
			printf("\n");
//		}

		//Loop

		printf("Enter Choice: ");
		scanf_s("%d", &shape);


	}

}


