// PayCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "stdio.h"

void main()
{
	int hoursWorked = 0;
	float basicRate = 25.00;
	float overTimeRate = 35.00;
	float pay = 0.0;

	printf("Enter hours worked: ");
	scanf_s("%d", &hoursWorked);
	pay = hoursWorked * basicRate;

	if (hoursWorked <= 40) {
		pay = hoursWorked * basicRate;
	}
	else {
		pay = 40 * basicRate + (hoursWorked - 40)*overTimeRate;
	}


	printf("You worked %d hours", hoursWorked);
	printf(" and earned %.2f \n", pay);
}

