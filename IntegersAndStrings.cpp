// IntegersAndStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "math.h"

int stringLen(char *str);
int stringToInt(char *str);
char * intToString(int val, char *str);

void main()
{
	int iVal;
	char str[100];
	char string[] = "-12340987";

	iVal = stringToInt(string);

	printf("string: %s in integer form is %d \n\n", string, stringToInt(string));

	iVal = -469033;

	printf("integer: %d in string form is %s \n\n", iVal, intToString(iVal, str));
}

int stringToInt(char *str)
{
	int result = 0;
	int num = 1;
	while (('-' == (*str)) || ((*str) == '+')) //Positive or Negative
	{
		if (*str == '-')
			num = num * -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9')) {
		result = (result * 10) + ((*str) - '0');
		str++;
	}

	return (result * num); // Ensure sign is correct
}

int stringLen(char *str)
{
	int i = 0;
	while (str[i] != '\0') { // Checking for \0

		i++;
	}
	

	return i;
}


char * intToString(int val, char * str)
{

	snprintf(str, sizeof(str)*8, "%d", val); 

	return str;

}