// LargeNum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h> 
#include <limits.h> /* For INT_MAX */ 




void print2Smallest(int arr[], int arr_size)
{
	int i, lowPoints1, lowPoints2;



	lowPoints1 = lowPoints2 = INT_MAX;
	for (i = 0; i < arr_size; i++)
	{
		/* If current element is smaller than lowPoints1
		   then update both lowPoints1 and lowPoints2 */
		if (arr[i] < lowPoints1)
		{
			lowPoints2 = lowPoints1;
			lowPoints1 = arr[i];
		}

		/* If arr[i] is in between lowPoints1 and lowPoints2
		   then update lowPoints2  */
		else if (arr[i] < lowPoints2 && arr[i] != lowPoints1)
			lowPoints2 = arr[i];
	}
	
		printf("The smallest element is %d and lowPoints2 "
			"Smallest element is %d\n", lowPoints1, lowPoints2);
}

int main()
{
	int points1 =0, points2 = 0, points3 = 0, points4 = 0, points5 = 0, points6 = 0;
	int arr[] = { points1, points2, points3, points4, points5, points6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	print2Smallest(arr, n);
	return 0;

	printf("Enter Points1: ");
	scanf_s("%d", &points1);
	printf("Enter Points2: ");
	scanf_s("%d", &points2);
	printf("Enter Points3: ");
	scanf_s("%d", &points3);
	printf("Enter Points4: ");
	scanf_s("%d", &points4);
	printf("Enter Points5: ");
	scanf_s("%d", &points5);
	printf("Enter Points6: ");
	scanf_s("%d", &points6);



}
