// LCPointsCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "string.h"


void main()
{
	int mark1, mark2, mark3, mark4, mark5, mark6;
	int points1 = 0, points2 = 0, points3 = 0, points4 = 0, points5 = 0, points6 = 0;
	int mark7 = 0;
	int mark8 = 0;
	int mark9 = 0;
	int mark10 = 0;
	int points7 = 0;
	int points8 = 0;
	int points9 = 0;
	int points10 = 0;
	int newSub7 = 0;
	int newSub8 = 0;
	int newSub9 = 0;
	int newSub10 = 0;
	int indexHigh = 0;
	int indexLow1 = 0;
	int indexLow2 = 0;
	int indexLow3 = 0;
	int indexLow4 = 0;
	int level1 = 2;
	int level2 = 2;
	int level3 = 2;
	int level4 = 2;
	int level5 = 2;
	int level6 = 2;
	int level7 = 2;
	int level8 = 2;
	int level9 = 2;
	int level10 = 2;
	char level1String[15];
	char level2String[15];
	char level3String[15];
	char level4String[15];
	char level5String[15];
	char level6String[15];
	char level7String[15];
	char level8String[15];
	char level9String[15];
	char level10String[15];
	char highLevel[][20] = { "Higher","H","h","higher","HIGHER","HONOURS","HL","hl","honours","Honours" };
	char ordLevel[][20] = { "Ordinary","ORDINARY","PASS","O","o","ordinary","OL","ol","pass","Pass" };
	float average;
	int lowPoints1 = 0;
	int lowPoints2 = 0;
	int lowPoints3 = 0;
	int lowPoints4 = 0;
	int highMark = 0;
	int maths25 = 0;
	int mathsAdded = 0;
	int pointsOrdMat = 0;
	int adminLogin = 0;
	char adminPassword[][20] = { "activateadmin" };
	char sub1[15];
	char sub2[15];
	char sub3[15];
	char sub4[15];
	char sub5[15];
	char sub6[15];
	char sub7[15];
	char sub8[15];
	char sub9[15];
	char sub10[15];
	char mathYN[10];
	char sub7YN[15];
	char sub8YN[15];
	char sub9YN[15];
	char sub10YN[15];
	char yesString[][20] = { "yes","Yes","y","Y","YES" };
	char noString[][20] = { "no","No","n","N","NO" };
	char mathsIdenti[][20] = { "maths","Maths","MATHS","mat","Mat","MAT","math","Math","MATH","Mathematics","MATHEMATICS","mathematics" };



	printf("\n");
	
	// Entering Marks

	printf("Enter 1st Subject: ");
	scanf("%s", sub1);

	int k = 0;


	for (k = 0; k < 1; k++) {
		if (strcmp(adminPassword[k], sub1) == 0) {

			adminLogin = 1;
			printf("\nAdministrator Control Activated\n\n");
			printf("Enter 1st Subject: ");
			scanf("%s", sub1);

		}

	}

	printf("Enter %s Mark (Percentage): ", &sub1);
	scanf("%d", &mark1);
	printf("Enter %s Level (Higher / Ordinary): ", &sub1);
	scanf("%s", level1String);

	// Level 1

	while (level1 > 1)
	{

		int g = 0;

		for (g = 0; g < 12; g++) {
			if (strcmp(highLevel[g], level1String) == 0) {

				level1 = 1;
			}

		}
		for (g = 0; g < 12; g++) {
			if (strcmp(ordLevel[g], level1String) == 0) {

				level1 = 0;
			}

		}
		if (level1 == 2) {
		
			printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

			printf("Enter %s Level (Higher / Ordinary): ", &sub1);
			scanf("%s", level1String);

		}

	}


	printf("\n");

	printf("Enter 2nd Subject: ");
	scanf("%s", sub2);
	printf("Enter %s Mark (Percentage): ", &sub2);
	scanf("%d", &mark2);
	printf("Enter %s Level (Higher / Ordinary): ", &sub2);
	scanf("%s", level2String);

	// Level 2

	while (level2 > 1)
	{

		int g = 0;

		for (g = 0; g < 12; g++) {
			if (strcmp(highLevel[g], level2String) == 0) {

				level2 = 1;
			}

		}
		for (g = 0; g < 12; g++) {
			if (strcmp(ordLevel[g], level2String) == 0) {

				level2 = 0;
			}

		}
		if (level2 == 2) {

			printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

			printf("Enter %s Level (Higher / Ordinary): ", &sub2);
			scanf("%s", level2String);

		}

	}

	printf("\n");

	printf("Enter 3rd Subject: ");
	scanf("%s", sub3);
	printf("Enter %s Mark (Percentage): ", &sub3);
	scanf("%d", &mark3);
	printf("Enter %s Level (Higher / Ordinary): ", &sub3);
	scanf("%s", level3String);

	// Level 3

	while (level3 > 1)
	{

		int g = 0;

		for (g = 0; g < 12; g++) {
			if (strcmp(highLevel[g], level3String) == 0) {

				level3 = 1;
			}

		}
		for (g = 0; g < 12; g++) {
			if (strcmp(ordLevel[g], level3String) == 0) {

				level3 = 0;
			}

		}
		if (level3 == 2) {

			printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

			printf("Enter %s Level (Higher / Ordinary): ", &sub3);
			scanf("%s", level3String);

		}

	}

	printf("\n");

	printf("Enter 4th Subject: ");
	scanf("%s", sub4);
	printf("Enter %s Mark (Percentage): ", &sub4);
	scanf("%d", &mark4);
	printf("Enter %s Level (Higher / Ordinary): ", &sub4);
	scanf("%s", level4String);

	// Level 4

	while (level4 > 1)
	{

		int g = 0;

		for (g = 0; g < 12; g++) {
			if (strcmp(highLevel[g], level4String) == 0) {

				level4 = 1;
			}

		}
		for (g = 0; g < 12; g++) {
			if (strcmp(ordLevel[g], level4String) == 0) {

				level4 = 0;
			}

		}
		if (level4 == 2) {

			printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

			printf("Enter %s Level (Higher / Ordinary): ", &sub4);
			scanf("%s", level4String);

		}

	}

	printf("\n");

	printf("Enter 5th Subject: ");
	scanf("%s", sub5);
	printf("Enter %s Mark (Percentage): ", &sub5);
	scanf("%d", &mark5);
	printf("Enter %s Level (Higher / Ordinary): ", &sub5);
	scanf("%s", level5String);

	// Level 5

	while (level5 > 1)
	{

		int g = 0;

		for (g = 0; g < 12; g++) {
			if (strcmp(highLevel[g], level5String) == 0) {

				level5 = 1;
			}

		}
		for (g = 0; g < 12; g++) {
			if (strcmp(ordLevel[g], level5String) == 0) {

				level5 = 0;
			}

		}
		if (level5 == 2) {

			printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

			printf("Enter %s Level (Higher / Ordinary): ", &sub5);
			scanf("%s", level5String);

		}

	}

	printf("\n");

	printf("Enter 6th Subject: ");
	scanf("%s", sub6);
	printf("Enter %s Mark (Percentage): ", &sub6);
	scanf("%d", &mark6);
	printf("Enter %s Level (Higher / Ordinary): ", &sub6);
	scanf("%s", level6String);

	// Level 6

	while (level6 > 1)
	{

		int g = 0;

		for (g = 0; g < 12; g++) {
			if (strcmp(highLevel[g], level6String) == 0) {

				level6 = 1;
			}

		}
		for (g = 0; g < 12; g++) {
			if (strcmp(ordLevel[g], level6String) == 0) {

				level6 = 0;
			}

		}
		if (level6 == 2) {

			printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

			printf("Enter %s Level (Higher / Ordinary): ", &sub6);
			scanf("%s", level6String);

		}

	}

	printf("\n");

	printf("Add a 7th Subject? (Yes / No): ");
	scanf("%s", sub7YN);
	printf("\n");

	int h = 0;

	for (h = 0; h < 5; h++) {
		if (strcmp(yesString[h], sub7YN) == 0) {

			newSub7 = 1;
		}

	}
	for (h = 0; h < 5; h++) {
		if (strcmp(noString[h], sub7YN) == 0) {

			newSub7 = 0;
		}

	}

	if (newSub7 == 1)
	{
		printf("Enter 7th Subject: ");
		scanf("%s", sub7);
		printf("Enter %s Mark (Percentage): ", &sub7);
		scanf("%d", &mark7);
		printf("Enter %s Level (Higher / Ordinary): ", &sub7);
		scanf("%s", level7String);

		// Level 7

		while (level7 > 1)
		{

			int g = 0;

			for (g = 0; g < 12; g++) {
				if (strcmp(highLevel[g], level7String) == 0) {

					level7 = 1;
				}

			}
			for (g = 0; g < 12; g++) {
				if (strcmp(ordLevel[g], level7String) == 0) {

					level7 = 0;
				}

			}
			if (level7 == 2) {

				printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

				printf("Enter %s Level (Higher / Ordinary): ", &sub7);
				scanf("%s", level7String);

			}

		}

		printf("\n");

		printf("Add an 8th Subject? (Yes / No): ");
		scanf("%s", sub8YN);
		printf("\n");

		int h = 0;

		for (h = 0; h < 5; h++) {
			if (strcmp(yesString[h], sub8YN) == 0) {

				newSub8 = 1;
			}

		}
		for (h = 0; h < 5; h++) {
			if (strcmp(noString[h], sub8YN) == 0) {

				newSub8 = 0;
			}

		}

	}

	if (newSub8 == 1)
	{
		printf("Enter 8th Subject: ");
		scanf("%s", sub8);
		printf("Enter %s Mark (Percentage): ", &sub8);
		scanf("%d", &mark8);
		printf("Enter %s Level (Higher / Ordinary): ", &sub8);
		scanf("%s", level8String);

		// Level 8

		while (level8 > 1)
		{

			int g = 0;

			for (g = 0; g < 12; g++) {
				if (strcmp(highLevel[g], level8String) == 0) {

					level8 = 1;
				}

			}
			for (g = 0; g < 12; g++) {
				if (strcmp(ordLevel[g], level8String) == 0) {

					level8 = 0;
				}

			}
			if (level8 == 2) {

				printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

				printf("Enter %s Level (Higher / Ordinary): ", &sub8);
				scanf("%s", level8String);

			}

		}

		printf("\n");

		printf("Add a 9th Subject? (Yes / No): ");
		scanf("%s", sub9YN);
		printf("\n");

		int h = 0;

		for (h = 0; h < 5; h++) {
			if (strcmp(yesString[h], sub9YN) == 0) {

				newSub9 = 1;
			}

		}
		for (h = 0; h < 5; h++) {
			if (strcmp(noString[h], sub9YN) == 0) {

				newSub9 = 0;
			}

		}

	}
	if (newSub9 == 1)
	{
		printf("Enter 9th Subject: ");
		scanf("%s", sub9);
		printf("Enter %s Mark (Percentage): ", &sub9);
		scanf("%d", &mark9);
		printf("Enter %s Level (Higher / Ordinary): ", &sub9);
		scanf("%s", level9String);

		// Level 9

		while (level9 > 1)
		{

			int g = 0;

			for (g = 0; g < 12; g++) {
				if (strcmp(highLevel[g], level9String) == 0) {

					level9 = 1;
				}

			}
			for (g = 0; g < 12; g++) {
				if (strcmp(ordLevel[g], level9String) == 0) {

					level9 = 0;
				}

			}
			if (level9 == 2) {

				printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

				printf("Enter %s Level (Higher / Ordinary): ", &sub9);
				scanf("%s", level9String);

			}

		}

		printf("\n");

		printf("Add a 10th Subject? (Yes / No): ");
		scanf("%s", sub10YN);
		printf("\n");

		int h = 0;

		for (h = 0; h < 5; h++) {
			if (strcmp(yesString[h], sub10YN) == 0) {

				newSub10 = 1;
			}

		}
		for (h = 0; h < 5; h++) {
			if (strcmp(noString[h], sub10YN) == 0) {

				newSub10 = 0;
			}

		}

	}
	if (newSub10 == 1)
	{
		printf("Enter 10th Subject: ");
		scanf("%s", sub10);
		printf("Enter %s Mark (Percentage): ", &sub10);
		scanf("%d", &mark10);
		printf("Enter %s Level (Higher / Ordinary): ", &sub10);
		scanf("%s", level10String);

		// Level 10

		while (level10 > 1)
		{

			int g = 0;

			for (g = 0; g < 12; g++) {
				if (strcmp(highLevel[g], level10String) == 0) {

					level10 = 1;
				}

			}
			for (g = 0; g < 12; g++) {
				if (strcmp(ordLevel[g], level10String) == 0) {

					level10 = 0;
				}

			}
			if (level10 == 2) {

				printf("\nUnrecognised Level Entered. Please Try Again!\n\n");

				printf("Enter %s Level (Higher / Ordinary): ", &sub10);
				scanf("%s", level10String);

			}

		}
		printf("\n");

	}




	// Higher Level Maths


	int i = 0;

	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub1) == 0) {

			mathsAdded = 1;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub2) == 0) {

			mathsAdded = 2;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub3) == 0) {

			mathsAdded = 3;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub4) == 0) {

			mathsAdded = 4;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub5) == 0) {

			mathsAdded = 5;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub6) == 0) {

			mathsAdded = 6;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub7) == 0) {

			mathsAdded = 7;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub8) == 0) {

			mathsAdded = 8;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub9) == 0) {

			mathsAdded = 9;
		}

	}
	for (i = 0; i < 12; i++) {
		if (strcmp(mathsIdenti[i], sub10) == 0) {

			mathsAdded = 10;
		}

	}
	

	if ((mathsAdded == 1) && (level1 == 1) && (mark1 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 2) && (level2 == 1) && (mark2 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 3) && (level3 == 1) && (mark3 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 4) && (level4 == 1) && (mark4 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;
	}
	else if ((mathsAdded == 5) && (level5 == 1) && (mark5 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 6) && (level6 == 1) && (mark6 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 7) && (level7 == 1) && (mark7 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 8) && (level8 == 1) && (mark8 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 9) && (level9 == 1) && (mark9 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if ((mathsAdded == 10) && (level10 == 1) && (mark10 >= 40))
	{
		printf("\n\nResults: (25 points were added for pass in Higher Level Mathamatics):\n");
		maths25 = 1;

	}
	else if (((mathsAdded == 1) && (level1 == 0)) || ((mathsAdded == 1) && (level1 == 1) && (mark1 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 2) && (level2 == 0)) || ((mathsAdded == 2) && (level2 == 1) && (mark2 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 3) && (level3 == 0)) || ((mathsAdded == 3) && (level3 == 1) && (mark3 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 4) && (level4 == 0)) || ((mathsAdded == 4) && (level4 == 1) && (mark4 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 5) && (level5 == 0)) || ((mathsAdded == 5) && (level5 == 1) && (mark5 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 6) && (level6 == 0)) || ((mathsAdded == 6) && (level6 == 1) && (mark6 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 7) && (level7 == 0)) || ((mathsAdded == 7) && (level7 == 1) && (mark7 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 8) && (level8 == 0)) || ((mathsAdded == 8) && (level8 == 1) && (mark8 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 9) && (level9 == 0)) || ((mathsAdded == 9) && (level9 == 1) && (mark9 < 40)))
	{
		printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
		maths25 = 0;
	}
	else if (((mathsAdded == 10) && (level10 == 0)) || ((mathsAdded == 10) && (level10 == 1) && (mark10 < 40)))
	{
	printf("\n\nResults: (Additional points for pass in Higher Level Mathamatics were not added):\n");
	maths25 = 0;
	}
	else if (mathsAdded == 0)
	{

		printf("Add 25 points for pass in Higher Level Mathamatics? (Yes / No): ");
		scanf("%s", mathYN);
		

	}

	int j = 0;

	for (j = 0; j < 5; j++) {
		if (strcmp(yesString[j], mathYN) == 0) {

			maths25 = 1;
			printf("\n\nResults (25 points were added for pass in Higher Level Mathamatics):\n");
		}

	}
	for (j = 0; j < 5; j++) {
		if (strcmp(noString[j], mathYN) == 0) {

			maths25 = 0;
			printf("\n\nResults (Additional points for pass in Higher Level Mathamatics were not added):\n");
		}

	}
	

	// Average Mark

	if (newSub7 == 0)
	{

		average = ((float)mark1 + (float)mark2 + (float)mark3 + (float)mark4 + (float)mark5 + (float)mark6) / 6;

	}
	if (newSub7 == 1 && newSub8 == 0)
	{

		average = ((float)mark1 + (float)mark2 + (float)mark3 + (float)mark4 + (float)mark5 + (float)mark6 + (float)mark7) / 7;

	}
	if (newSub7 == 1 && newSub8 == 1 && newSub9 == 0)
	{

		average = ((float)mark1 + (float)mark2 + (float)mark3 + (float)mark4 + (float)mark5 + (float)mark6 + (float)mark7 + (float)mark8) / 8;

	}
	if (newSub7 == 1 && newSub8 == 1 && newSub9 == 1 && newSub10 == 0)
	{

		average = ((float)mark1 + (float)mark2 + (float)mark3 + (float)mark4 + (float)mark5 + (float)mark6 + (float)mark7 + (float)mark8 + (float)mark9) / 9;

	}
	if (newSub7 == 1 && newSub8 == 1 && newSub9 == 1 && newSub10 == 1)
	{

		average = ((float)mark1 + (float)mark2 + (float)mark3 + (float)mark4 + (float)mark5 + (float)mark6 + (float)mark7 + (float)mark8 + (float)mark9 + (float)mark10) / 10;

	}

	printf("\n");

	printf("Average Mark = %.2f \n", average);

	// Grades Acheived

	printf("Grades: ");

	// Grade 1 (H)

	if ((mark1 >= 90) && (level1 == 1))
	{
		points1 = 100;
		printf("H1 ");
	}
	else if ((mark1 >= 80 && mark1 < 90) && (level1 == 1))
	{
		points1 = 88;
		printf("H2 ");
	}
	else if ((mark1 >= 70 && mark1 < 80) && (level1 == 1))
	{
		points1 = 77;
		printf("H3 ");
	}
	else if ((mark1 >= 60 && mark1 < 70) && (level1 == 1))
	{
		points1 = 66;
		printf("H4 ");
	}
	else if ((mark1 >= 50 && mark1 < 60) && (level1 == 1))
	{
		points1 = 56;
		printf("H5 ");
	}
	else if ((mark1 >= 40 && mark1 < 50) && (level1 == 1))
	{
		points1 = 46;
		printf("H6 ");
	}
	else if ((mark1 >= 30 && mark1 < 40) && (level1 == 1))
	{
		points1 = 37;
		printf("H7 ");
	}
	else if ((mark1 < 30) && (level1 == 1))
	{
		points1 = 0;
		printf("H8 ");
	}

	// Grade 1 (O)

	else if ((mark1 >= 90) && (level1 == 0))
	{
		points1 = 56;
		printf("O1 ");
	}
	else if ((mark1 >= 80 && mark1 < 90) && (level1 == 0))
	{
		points1 = 46;
		printf("O2 ");
	}
	else if ((mark1 >= 70 && mark1 < 80) && (level1 == 0))
	{
		points1 = 37;
		printf("O3 ");
	}
	else if ((mark1 >= 60 && mark1 < 70) && (level1 == 0))
	{
		points1 = 28;
		printf("O4 ");
	}
	else if ((mark1 >= 50 && mark1 < 60) && (level1 == 0))
	{
		points1 = 20;
		printf("O5 ");
	}
	else if ((mark1 >= 40 && mark1 < 50) && (level1 == 0))
	{
		points1 = 12;
		printf("O6 ");
	}
	else if ((mark1 >= 30 && mark1 < 40) && (level1 == 0))
	{
		points1 = 0;
		printf("O7 ");
	}
	else if ((mark1 < 30) && (level1 == 0))
	{
		points1 = 0;
		printf("O8 ");
	}

	printf("(%s), ", &sub1);

	// Grade 2 (H)

	if ((mark2 >= 90) && (level2 == 1))
	{
		points2 = 100;
		printf("H1 ");
	}
	else if ((mark2 >= 80 && mark2 < 90) && (level2 == 1))
	{
		points2 = 88;
		printf("H2 ");
	}
	else if ((mark2 >= 70 && mark2 < 80) && (level2 == 1))
	{
		points2 = 77;
		printf("H3 ");
	}
	else if ((mark2 >= 60 && mark2 < 70) && (level2 == 1))
	{
		points2 = 66;
		printf("H4 ");
	}
	else if ((mark2 >= 50 && mark2 < 60) && (level2 == 1))
	{
		points2 = 56;
		printf("H5 ");
	}
	else if ((mark2 >= 40 && mark2 < 50) && (level2 == 1))
	{
		points2 = 46;
		printf("H6 ");
	}
	else if ((mark2 >= 30 && mark2 < 40) && (level2 == 1))
	{
		points2 = 37;
		printf("H7 ");
	}
	else if ((mark2 < 30) && (level2 == 1))
	{
		points2 = 0;
		printf("H8 ");
	}

	// Grade 2 (O)

	else if ((mark2 >= 90) && (level2 == 0))
	{
		points2 = 56;
		printf("O1 ");
	}
	else if ((mark2 >= 80 && mark2 < 90) && (level2 == 0))
	{
		points2 = 46;
		printf("O2 ");
	}
	else if ((mark2 >= 70 && mark2 < 80) && (level2 == 0))
	{
		points2 = 37;
		printf("O3 ");
	}
	else if ((mark2 >= 60 && mark2 < 70) && (level2 == 0))
	{
		points2 = 28;
		printf("O4 ");
	}
	else if ((mark2 >= 50 && mark2 < 60) && (level2 == 0))
	{
		points2 = 20;
		printf("O5 ");
	}
	else if ((mark2 >= 40 && mark2 < 50) && (level2 == 0))
	{
		points2 = 12;
		printf("O6 ");
	}
	else if ((mark2 >= 30 && mark2 < 40) && (level2 == 0))
	{
		points2 = 0;
		printf("O7 ");
	}
	else if ((mark2 < 30) && (level2 == 0))
	{
		points2 = 0;
		printf("O8 ");
	}

	printf("(%s), ", &sub2);

	// Grade 3 (H)

	if ((mark3 >= 90) && (level3 == 1))
	{
		points3 = 100;
		printf("H1 ");
	}
	else if ((mark3 >= 80 && mark3 < 90) && (level3 == 1))
	{
		points3 = 88;
		printf("H2 ");
	}
	else if ((mark3 >= 70 && mark3 < 80) && (level3 == 1))
	{
		points3 = 77;
		printf("H3 ");
	}
	else if ((mark3 >= 60 && mark3 < 70) && (level3 == 1))
	{
		points3 = 66;
		printf("H4 ");
	}
	else if ((mark3 >= 50 && mark3 < 60) && (level3 == 1))
	{
		points3 = 56;
		printf("H5 ");
	}
	else if ((mark3 >= 40 && mark3 < 50) && (level3 == 1))
	{
		points3 = 46;
		printf("H6 ");
	}
	else if ((mark3 >= 30 && mark3 < 40) && (level3 == 1))
	{
		points3 = 37;
		printf("H7 ");
	}
	else if ((mark3 < 30) && (level3 == 1))
	{
		points3 = 0;
		printf("H8 ");
	}

	// Grade 3 (O)

	else if ((mark3 >= 90) && (level3 == 0))
	{
		points3 = 56;
		printf("O1 ");
	}
	else if ((mark3 >= 80 && mark3 < 90) && (level3 == 0))
	{
		points3 = 46;
		printf("O2 ");
	}
	else if ((mark3 >= 70 && mark3 < 80) && (level3 == 0))
	{
		points3 = 37;
		printf("O3 ");
	}
	else if ((mark3 >= 60 && mark3 < 70) && (level3 == 0))
	{
		points3 = 28;
		printf("O4 ");
	}
	else if ((mark3 >= 50 && mark3 < 60) && (level3 == 0))
	{
		points3 = 20;
		printf("O5 ");
	}
	else if ((mark3 >= 40 && mark3 < 50) && (level3 == 0))
	{
		points3 = 12;
		printf("O6 ");
	}
	else if ((mark3 >= 30 && mark3 < 40) && (level3 == 0))
	{
		points3 = 0;
		printf("O7 ");
	}
	else if ((mark3 < 30) && (level3 == 0))
	{
		points3 = 0;
		printf("O8 ");
	}

	printf("(%s), ", &sub3);

	// Grade 4 (H)

	if ((mark4 >= 90) && (level4 == 1))
	{
		points4 = 100;
		printf("H1 ");
	}
	else if ((mark4 >= 80 && mark4 < 90) && (level4 == 1))
	{
		points4 = 88;
		printf("H2 ");
	}
	else if ((mark4 >= 70 && mark4 < 80) && (level4 == 1))
	{
		points4 = 77;
		printf("H3 ");
	}
	else if ((mark4 >= 60 && mark4 < 70) && (level4 == 1))
	{
		points4 = 66;
		printf("H4 ");
	}
	else if ((mark4 >= 50 && mark4 < 60) && (level4 == 1))
	{
		points4 = 56;
		printf("H5 ");
	}
	else if ((mark4 >= 40 && mark4 < 50) && (level4 == 1))
	{
		points4 = 46;
		printf("H6, ");
	}
	else if ((mark4 >= 30 && mark4 < 40) && (level4 == 1))
	{
		points4 = 37;
		printf("H7 ");
	}
	else if ((mark4 < 30) && (level4 == 1))
	{
		points4 = 0;
		printf("H8 ");
	}

	// Grade 4 (O)

	else if ((mark4 >= 90) && (level4 == 0))
	{
		points4 = 56;
		printf("O1 ");
	}
	else if ((mark4 >= 80 && mark4 < 90) && (level4 == 0))
	{
		points4 = 46;
		printf("O2 ");
	}
	else if ((mark4 >= 70 && mark4 < 80) && (level4 == 0))
	{
		points4 = 37;
		printf("O3 ");
	}
	else if ((mark4 >= 60 && mark4 < 70) && (level4 == 0))
	{
		points4 = 28;
		printf("O4 ");
	}
	else if ((mark4 >= 50 && mark4 < 60) && (level4 == 0))
	{
		points4 = 20;
		printf("O5 ");
	}
	else if ((mark4 >= 40 && mark4 < 50) && (level4 == 0))
	{
		points4 = 12;
		printf("O6 ");
	}
	else if ((mark4 >= 30 && mark4 < 40) && (level4 == 0))
	{
		points4 = 0;
		printf("O7 ");
	}
	else if ((mark4 < 30) && (level4 == 0))
	{
		points4 = 0;
		printf("O8 ");
	}

	printf("(%s), ", &sub4);

	// Grade 5 (H)

	if ((mark5 >= 90) && (level5 == 1))
	{
		points5 = 100;
		printf("H1 ");
	}
	else if ((mark5 >= 80 && mark5 < 90) && (level5 == 1))
	{
		points5 = 88;
		printf("H2 ");
	}
	else if ((mark5 >= 70 && mark5 < 80) && (level5 == 1))
	{
		points5 = 77;
		printf("H3 ");
	}
	else if ((mark5 >= 60 && mark5 < 70) && (level5 == 1))
	{
		points5 = 66;
		printf("H4 ");
	}
	else if ((mark5 >= 50 && mark5 < 60) && (level5 == 1))
	{
		points5 = 56;
		printf("H5 ");
	}
	else if ((mark5 >= 40 && mark5 < 50) && (level5 == 1))
	{
		points5 = 46;
		printf("H6 ");
	}
	else if ((mark5 >= 30 && mark5 < 40) && (level5 == 1))
	{
		points5 = 37;
		printf("H7 ");
	}
	else if ((mark5 < 30) && (level5 == 1))
	{
		points5 = 0;
		printf("H8 ");
	}

	// Grade 5 (O)

	else if ((mark5 >= 90) && (level5 == 0))
	{
		points5 = 56;
		printf("O1 ");
	}
	else if ((mark5 >= 80 && mark5 < 90) && (level5 == 0))
	{
		points5 = 46;
		printf("O2 ");
	}
	else if ((mark5 >= 70 && mark5 < 80) && (level5 == 0))
	{
		points5 = 37;
		printf("O3 ");
	}
	else if ((mark5 >= 60 && mark5 < 70) && (level5 == 0))
	{
		points5 = 28;
		printf("O4 ");
	}
	else if ((mark5 >= 50 && mark5 < 60) && (level5 == 0))
	{
		points5 = 20;
		printf("O5 ");
	}
	else if ((mark5 >= 40 && mark5 < 50) && (level5 == 0))
	{
		points5 = 12;
		printf("O6 ");
	}
	else if ((mark5 >= 30 && mark5 < 40) && (level5 == 0))
	{
		points5 = 0;
		printf("O7 ");
	}
	else if ((mark5 < 30) && (level5 == 0))
	{
		points5 = 0;
		printf("O8 ");
	}

	printf("(%s), ", &sub5);

	// Grade 6 (H)

	if ((mark6 >= 90) && (level6 == 1))
	{
		points6 = 100;
		printf("H1 ");
	}
	else if ((mark6 >= 80 && mark6 < 90) && (level6 == 1))
	{
		points6 = 88;
		printf("H2 ");
	}
	else if ((mark6 >= 70 && mark6 < 80) && (level6 == 1))
	{
		points6 = 77;
		printf("H3 ");
	}
	else if ((mark6 >= 60 && mark6 < 70) && (level6 == 1))
	{
		points6 = 66;
		printf("H4 ");
	}
	else if ((mark6 >= 50 && mark6 < 60) && (level6 == 1))
	{
		points6 = 56;
		printf("H5 ");
	}
	else if ((mark6 >= 40 && mark6 < 50) && (level6 == 1))
	{
		points6 = 46;
		printf("H6 ");
	}
	else if ((mark6 >= 30 && mark6 < 40) && (level6 == 1))
	{
		points6 = 37;
		printf("H7 ");
	}
	else if ((mark6 < 30) && (level6 == 1))
	{
		points6 = 0;
		printf("H8 ");
	}

	// Grade 6 (O)

	else if ((mark6 >= 90) && (level6 == 0))
	{
		points6 = 56;
		printf("O1 ");
	}
	else if ((mark6 >= 80 && mark6 < 90) && (level6 == 0))
	{
		points6 = 46;
		printf("O2 ");
	}
	else if ((mark6 >= 70 && mark6 < 80) && (level6 == 0))
	{
		points6 = 37;
		printf("O3 ");
	}
	else if ((mark6 >= 60 && mark6 < 70) && (level6 == 0))
	{
		points6 = 28;
		printf("O4 ");
	}
	else if ((mark6 >= 50 && mark6 < 60) && (level6 == 0))
	{
		points6 = 20;
		printf("O5 ");
	}
	else if ((mark6 >= 40 && mark6 < 50) && (level6 == 0))
	{
		points6 = 12;
		printf("O6 ");
	}
	else if ((mark6 >= 30 && mark6 < 40) && (level6 == 0))
	{
		points6 = 0;
		printf("O7 ");
	}
	else if ((mark6 < 30) && (level6 == 0))
	{
		points6 = 0;
		printf("O8 ");
	}


	printf("(%s), ", &sub6);

	// Grade 7 (H)

	if ((newSub7 == 1) && (mark7 >= 90) && (level7 == 1))
	{
		points7 = 100;
		printf("H1 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 80 && mark7 < 90) && (level7 == 1))
	{
		points7 = 88;
		printf("H2 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 70 && mark7 < 80) && (level7 == 1))
	{
		points7 = 77;
		printf("H3 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 60 && mark7 < 70) && (level7 == 1))
	{
		points7 = 66;
		printf("H4 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 50 && mark7 < 60) && (level7 == 1))
	{
		points7 = 56;
		printf("H5");
	}
	else if ((newSub7 == 1) && (mark7 >= 40 && mark7 < 50) && (level7 == 1))
	{
		points7 = 46;
		printf("H6 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 30 && mark7 < 40) && (level7 == 1))
	{
		points7 = 37;
		printf("H7 ");
	}
	else if ((newSub7 == 1) && (mark7 < 30) && (level7 == 1))
	{
		points7 = 0;
		printf("H8 ");
	}

	// Grade 7 (O)

	else if ((newSub7 == 1) && (mark7 >= 90) && (level7 == 0))
	{
		points7 = 56;
		printf("O1 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 80 && mark7 < 90) && (level7 == 0))
	{
		points7 = 46;
		printf("O2 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 70 && mark7 < 80) && (level7 == 0))
	{
		points7 = 37;
		printf("O3 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 60 && mark7 < 70) && (level7 == 0))
	{
		points7 = 28;
		printf("O4 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 50 && mark7 < 60) && (level7 == 0))
	{
		points7 = 20;
		printf("O5 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 40 && mark7 < 50) && (level7 == 0))
	{
		points7 = 12;
		printf("O6 ");
	}
	else if ((newSub7 == 1) && (mark7 >= 30 && mark7 < 40) && (level7 == 0))
	{
		points7 = 0;
		printf("O7 ");
	}
	else if ((newSub7 == 1) && (mark7 < 30) && (level7 == 0))
	{
		points7 = 0;
		printf("O8 ");
	}

	if (newSub7 == 1)
	{
		printf("(%s)", &sub7);
	}




	// Grade 8 (H)

	if ((newSub8 == 1) && (mark8 >= 90) && (level8 == 1))
	{
		points8 = 100;
		printf(", H1 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 80 && mark8 < 90) && (level8 == 1))
	{
		points8 = 88;
		printf(", H2 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 70 && mark8 < 80) && (level8 == 1))
	{
		points8 = 77;
		printf(", H3 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 60 && mark8 < 70) && (level8 == 1))
	{
		points8 = 66;
		printf(", H4 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 50 && mark8 < 60) && (level8 == 1))
	{
		points8 = 56;
		printf(", H5");
	}
	else if ((newSub8 == 1) && (mark8 >= 40 && mark8 < 50) && (level8 == 1))
	{
		points8 = 46;
		printf(", H6 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 30 && mark8 < 40) && (level8 == 1))
	{
		points8 = 37;
		printf(", H7 ");
	}
	else if ((newSub8 == 1) && (mark8 < 30) && (level8 == 1))
	{
		points8 = 0;
		printf(", H8 ");
	}

	// Grade 8 (O)

	else if ((newSub8 == 1) && (mark8 >= 90) && (level8 == 0))
	{
		points8 = 56;
		printf(", O1 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 80 && mark8 < 90) && (level8 == 0))
	{
		points8 = 46;
		printf(", O2 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 70 && mark8 < 80) && (level8 == 0))
	{
		points8 = 37;
		printf(", O3 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 60 && mark8 < 70) && (level8 == 0))
	{
		points8 = 28;
		printf(", O4 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 50 && mark8 < 60) && (level8 == 0))
	{
		points8 = 20;
		printf(", O5 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 40 && mark8 < 50) && (level8 == 0))
	{
		points8 = 12;
		printf(", O6 ");
	}
	else if ((newSub8 == 1) && (mark8 >= 30 && mark8 < 40) && (level8 == 0))
	{
		points8 = 0;
		printf(", O7 ");
	}
	else if ((newSub8 == 1) && (mark8 < 30) && (level8 == 0))
	{
		points8 = 0;
		printf(", O8 ");
	}

	if (newSub8 == 1)
	{
		printf("(%s)", &sub8);
	}



	// Grade 9 (H)

	if ((newSub9 == 1) && (mark9 >= 90) && (level9 == 1))
	{
		points9 = 100;
		printf(", H1 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 80 && mark9 < 90) && (level9 == 1))
	{
		points9 = 88;
		printf(", H2 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 70 && mark9 < 80) && (level9 == 1))
	{
		points9 = 77;
		printf(", H3 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 60 && mark9 < 70) && (level9 == 1))
	{
		points9 = 66;
		printf(", H4 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 50 && mark9 < 60) && (level9 == 1))
	{
		points9 = 56;
		printf(", H5");
	}
	else if ((newSub9 == 1) && (mark9 >= 40 && mark9 < 50) && (level9 == 1))
	{
		points9 = 46;
		printf(", H6 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 30 && mark9 < 40) && (level9 == 1))
	{
		points9 = 37;
		printf(", H7 ");
	}
	else if ((newSub9 == 1) && (mark9 < 30) && (level9 == 1))
	{
		points9 = 0;
		printf(", H8 ");
	}

	// Grade 9 (O)

	else if ((newSub9 == 1) && (mark9 >= 90) && (level9 == 0))
	{
		points9 = 56;
		printf(", O1 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 80 && mark9 < 90) && (level9 == 0))
	{
		points9 = 46;
		printf(", O2 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 70 && mark9 < 80) && (level9 == 0))
	{
		points9 = 37;
		printf(", O3 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 60 && mark9 < 70) && (level9 == 0))
	{
		points9 = 28;
		printf(", O4 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 50 && mark9 < 60) && (level9 == 0))
	{
		points9 = 20;
		printf(", O5 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 40 && mark9 < 50) && (level9 == 0))
	{
		points9 = 12;
		printf(", O6 ");
	}
	else if ((newSub9 == 1) && (mark9 >= 30 && mark9 < 40) && (level9 == 0))
	{
		points9 = 0;
		printf(", O7 ");
	}
	else if ((newSub9 == 1) && (mark9 < 30) && (level9 == 0))
	{
		points9 = 0;
		printf(", O8 ");
	}

	if (newSub9 == 1)
	{
		printf("(%s)", &sub9);
	}


	// Grade 10 (H)

	if ((newSub10 == 1) && (mark10 >= 90) && (level10 == 1))
	{
		points10 = 100;
		printf(", H1 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 80 && mark10 < 90) && (level10 == 1))
	{
		points10 = 88;
		printf(", H2 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 70 && mark10 < 80) && (level10 == 1))
	{
		points10 = 77;
		printf(", H3 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 60 && mark10 < 70) && (level10 == 1))
	{
		points10 = 66;
		printf(", H4 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 50 && mark10 < 60) && (level10 == 1))
	{
		points10 = 56;
		printf(", H5");
	}
	else if ((newSub10 == 1) && (mark10 >= 40 && mark10 < 50) && (level10 == 1))
	{
		points10 = 46;
		printf(", H6 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 30 && mark10 < 40) && (level10 == 1))
	{
		points10 = 37;
		printf(", H7 ");
	}
	else if ((newSub10 == 1) && (mark10 < 30) && (level10 == 1))
	{
		points10 = 0;
		printf(", H8 ");
	}

	// Grade 10 (O)

	else if ((newSub10 == 1) && (mark10 >= 90) && (level10 == 0))
	{
		points10 = 56;
		printf(", O1 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 80 && mark10 < 90) && (level10 == 0))
	{
		points10 = 46;
		printf(", O2 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 70 && mark10 < 80) && (level10 == 0))
	{
		points10 = 37;
		printf(", O3 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 60 && mark10 < 70) && (level10 == 0))
	{
		points10 = 28;
		printf(", O4 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 50 && mark10 < 60) && (level10 == 0))
	{
		points10 = 20;
		printf(", O5 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 40 && mark10 < 50) && (level10 == 0))
	{
		points10 = 12;
		printf(", O6 ");
	}
	else if ((newSub10 == 1) && (mark10 >= 30 && mark10 < 40) && (level10 == 0))
	{
		points10 = 0;
		printf(", O7 ");
	}
	else if ((newSub10 == 1) && (mark10 < 30) && (level10 == 0))
	{
		points10 = 0;
		printf(", O8 ");
	}

	if (newSub10 == 1)
	{
		printf("(%s)", &sub10);
	}

	printf("\n");


	//// Highest Mark

	//if (mark1 >= highMark)
	//{
	//	highMark = (mark1);
	//	indexHigh = 1;
	//

	//}
	//if (mark2 >= highMark)
	//{
	//	highMark = (mark2);
	//	indexHigh = 2;


	//}
	//if (mark3 >= highMark)
	//{
	//	highMark = (mark3);
	//	indexHigh = 3;


	//}
	//if (mark4 >= highMark)
	//{
	//	highMark = (mark4);
	//	indexHigh = 1;


	//}
	//if (mark5 >= highMark)
	//{
	//	highMark = (mark5);
	//	indexHigh = 1;


	//}
	//if (mark6 >= highMark)
	//{
	//	highMark = (mark6);
	//	indexHigh = 1;


	//}
	//if (mark7 >= highMark)
	//{
	//	highMark = (mark7);
	//	indexHigh = 1;


	//}
	//if (mark8 >= highMark)
	//{
	//	highMark = (mark8);
	//	indexHigh = 1;


	//}
	//if (mark9 >= highMark)
	//{
	//	highMark = (mark9);
	//	indexHigh = 1;


	//}
	//if (mark10 >= highMark)
	//{
	//	highMark = (mark10);
	//	indexHigh = 1;


	//}

	//if (indexHigh == 1)
	//{
	//	printf("Highest Mark = %d ", mark1);
	//	printf("in %s", &sub1);
	//}
	//if (indexHigh == 2)
	//{
	//	printf("Highest Mark = %d ", mark2);
	//	printf("in %s", &sub2);
	//}
	//if (indexHigh == 3)
	//{
	//	printf("Highest Mark = %d ", mark3);
	//	printf("in %s", &sub3);
	//}
	//if (indexHigh == 4)
	//{
	//	printf("Highest Mark = %d ", mark4);
	//	printf("in %s", &sub4);
	//}
	//if (indexHigh == 5)
	//{
	//	printf("Highest Mark = %d ", mark5);
	//	printf("in %s", &sub5);
	//}
	//if (indexHigh == 6)
	//{
	//	printf("Highest Mark = %d ", mark6);
	//	printf("in %s", &sub6);
	//}
	//if (indexHigh == 7)
	//{
	//	printf("Highest Mark = %d ", mark7);
	//	printf("in %s", &sub7);
	//}
	//if (indexHigh == 8)
	//{
	//	printf("Highest Mark = %d ", mark8);
	//	printf("in %s", &sub8);
	//}
	//if (indexHigh == 9)
	//{
	//	printf("Highest Mark = %d ", mark9);
	//	printf("in %s", &sub9);
	//}
	//if (indexHigh == 710)
	//{
	//	printf("Highest Mark = %d ", mark10);
	//	printf("in %s", &sub10);
	//}


	//

	//printf("\n");

	// Lowest Points 1

	if (points1 >= lowPoints1)
	{
		lowPoints1 = (points1);
		indexLow1 = 1;

	}
	if (points2 <= lowPoints1)
	{
		lowPoints1 = (points2);
		indexLow1 = 2;

	}
	if (points3 <= lowPoints1)
	{
		lowPoints1 = (points3);
		indexLow1 = 3;

	}
	if (points4 <= lowPoints1)
	{
		lowPoints1 = (points4);
		indexLow1 = 4;

	}
	if (points5 <= lowPoints1)
	{
		lowPoints1 = (points5);
		indexLow1 = 5;

	}
	if (points6 <= lowPoints1)
	{
		lowPoints1 = (points6);
		indexLow1 = 6;

	}
	if (points7 <= lowPoints1)
	{
		lowPoints1 = (points7);
		indexLow1 = 7;

	}
	if (points8 <= lowPoints1)
	{
		lowPoints1 = (points8);
		indexLow1 = 8;

	}
	if (points9 <= lowPoints1)
	{
		lowPoints1 = (points9);
		indexLow1 = 9;

	}
	if (points10 <= lowPoints1)
	{
		lowPoints1 = (points10);
		indexLow1 = 10;

	}



	if (indexLow1 == 1)
	{
		points1 = 101;
	}
	if (indexLow1 == 2)
	{
		points2 = 101;
	}
	if (indexLow1 == 3)
	{
		points3 = 101;
	}
	if (indexLow1 == 4)
	{
		points4 = 101;
	}
	if (indexLow1 == 5)
	{
		points5 = 101;
	}
	if (indexLow1 == 6)
	{
		points6 = 101;
	}
	if (indexLow1 == 7)
	{
		points7 = 101;
	}
	if (indexLow1 == 9)
	{
		points8 = 101;
	}
	if (indexLow1 == 9)
	{
		points9 = 101;
	}
	if (indexLow1 == 10)
	{
		points10 = 101;
	}

	// 2nd Lowest Points 

	if (points1 >= lowPoints2)
	{
		lowPoints2 = (points1);
		indexLow2 = 1;

	}
	if (points2 <= lowPoints2)
	{
		lowPoints2 = (points2);
		indexLow2 = 2;

	}
	if (points3 <= lowPoints2)
	{
		lowPoints2 = (points3);
		indexLow2 = 3;

	}
	if (points4 <= lowPoints2)
	{
		lowPoints2 = (points4);
		indexLow2 = 4;

	}
	if (points5 <= lowPoints2)
	{
		lowPoints2 = (points5);
		indexLow2 = 5;

	}
	if (points6 <= lowPoints2)
	{
		lowPoints2 = (points6);
		indexLow2 = 6;

	}
	if (points7 <= lowPoints2)
	{
		lowPoints2 = (points7);
		indexLow2 = 7;

	}
	if (points8 <= lowPoints2)
	{
		lowPoints2 = (points8);
		indexLow2 = 8;

	}
	if (points9 <= lowPoints2)
	{
		lowPoints2 = (points9);
		indexLow2 = 9;

	}
	if (points10 <= lowPoints2)
	{
		lowPoints2 = (points10);
		indexLow2 = 10;

	}



	if (indexLow2 == 1)
	{
		points1 = 101;
	}
	if (indexLow2 == 2)
	{
		points2 = 101;
	}
	if (indexLow2 == 3)
	{
		points3 = 101;
	}
	if (indexLow2 == 4)
	{
		points4 = 101;
	}
	if (indexLow2 == 5)
	{
		points5 = 101;
	}
	if (indexLow2 == 6)
	{
		points6 = 101;
	}
	if (indexLow2 == 7)
	{
		points7 = 101;
	}
	if (indexLow2 == 8)
	{
		points8 = 101;
	}
	if (indexLow2 == 9)
	{
		points9 = 101;
	}
	if (indexLow2 == 10)
	{
		points10 = 101;
	}

	// 3rd Lowest Points 

	if (points1 >= lowPoints3)
	{
		lowPoints3 = (points1);
		indexLow3 = 1;

	}
	if (points2 <= lowPoints3)
	{
		lowPoints3 = (points2);
		indexLow3 = 2;

	}
	if (points3 <= lowPoints3)
	{
		lowPoints3 = (points3);
		indexLow3 = 3;

	}
	if (points4 <= lowPoints3)
	{
		lowPoints3 = (points4);
		indexLow3 = 4;

	}
	if (points5 <= lowPoints3)
	{
		lowPoints3 = (points5);
		indexLow3 = 5;

	}
	if (points6 <= lowPoints3)
	{
		lowPoints3 = (points6);
		indexLow3 = 6;

	}
	if (points7 <= lowPoints3)
	{
		lowPoints3 = (points7);
		indexLow3 = 7;

	}
	if (points8 <= lowPoints3)
	{
		lowPoints3 = (points8);
		indexLow3 = 8;

	}
	if (points9 <= lowPoints3)
	{
		lowPoints3 = (points9);
		indexLow3 = 9;

	}
	if (points10 <= lowPoints3)
	{
		lowPoints3 = (points10);
		indexLow3 = 10;

	}



	if (indexLow3 == 1)
	{
		points1 = 101;
	}
	if (indexLow3 == 2)
	{
		points2 = 101;
	}
	if (indexLow3 == 3)
	{
		points3 = 101;
	}
	if (indexLow3 == 4)
	{
		points4 = 101;
	}
	if (indexLow3 == 5)
	{
		points5 = 101;
	}
	if (indexLow3 == 6)
	{
		points6 = 101;
	}
	if (indexLow3 == 7)
	{
		points7 = 101;
	}
	if (indexLow3 == 8)
	{
		points8 = 101;
	}
	if (indexLow3 == 9)
	{
		points9 = 101;
	}
	if (indexLow3 == 10)
	{
		points10 = 101;
	}

	// 4th Lowest Points 

	if (points1 >= lowPoints4)
	{
		lowPoints4 = (points1);
		indexLow4 = 1;

	}
	if (points2 <= lowPoints4)
	{
		lowPoints4 = (points2);
		indexLow4 = 2;

	}
	if (points3 <= lowPoints4)
	{
		lowPoints4 = (points3);
		indexLow4 = 3;

	}
	if (points4 <= lowPoints4)
	{
		lowPoints4 = (points4);
		indexLow4 = 4;

	}
	if (points5 <= lowPoints4)
	{
		lowPoints4 = (points5);
		indexLow4 = 5;

	}
	if (points6 <= lowPoints4)
	{
		lowPoints4 = (points6);
		indexLow4 = 6;

	}
	if (points7 <= lowPoints4)
	{
		lowPoints4 = (points7);
		indexLow4 = 7;

	}
	if (points8 <= lowPoints4)
	{
		lowPoints4 = (points8);
		indexLow4 = 8;

	}
	if (points9 <= lowPoints4)
	{
		lowPoints4 = (points9);
		indexLow4 = 9;

	}
	if (points10 <= lowPoints4)
	{
		lowPoints4 = (points10);
		indexLow4 = 10;

	}



	if (indexLow4 == 1)
	{
		points1 = 101;
	}
	if (indexLow4 == 2)
	{
		points2 = 101;
	}
	if (indexLow4 == 3)
	{
		points3 = 101;
	}
	if (indexLow4 == 4)
	{
		points4 = 101;
	}
	if (indexLow4 == 5)
	{
		points5 = 101;
	}
	if (indexLow4 == 6)
	{
		points6 = 101;
	}
	if (indexLow4 == 7)
	{
		points7 = 101;
	}
	if (indexLow4 == 8)
	{
		points8 = 101;
	}
	if (indexLow4 == 9)
	{
		points9 = 101;
	}
	if (indexLow4 == 10)
	{
		points10 = 101;
	}

	// Points Calculation

	pointsOrdMat = (points1 + points2 + points3 + points4 + points5 + points6 + points7 + points8 + points9 + points10) - (404);


	if (maths25 == 1)
	{
		printf("Points = %d \n", pointsOrdMat + 25);
	}
	if (maths25 == 0)
	{
		printf("Points = %d \n", pointsOrdMat);

	}

	printf("\n");

	// Test all values are correct

	if (adminLogin == 1)
	{
		printf("Control Panel:\n\n");
		printf("Points (1-10): %d %d %d %d %d %d %d %d %d %d", points1, points2, points3, points4, points5, points6, points7, points8, points9, points10);
		printf("\n");
		printf("Levels (1-10): %d %d %d %d %d %d %d %d %d %d", level1, level2, level3, level4, level5, level6, level7, level8, level9, level10);
		printf("\n");
		printf("Marks (1-10): %d %d %d %d %d %d %d %d %d %d", mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, mark9, mark10);
		printf("\n");
	}
	else {
		printf("\n");
	}


}



