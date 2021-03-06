// WordsAndVowels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels();

int isVowel(char c);

// generated using http://listofrandomnames.com/

char words[][20] = { "unpantheistical","bushiest","brazilein","indigestibility","aftershock","richardson","asgeir","knot","unarrestable","exophthalmus" };
int nwords = 10;



void main()
{
	char word[20];
	int i = 0;

	printLongestWord();

	i = findWordWithMostVowels();
	printf("\nWord with most vowels is: %s \n\n", words[i]);

	puts("Enter word:");
	gets_s(word);

	if (findWord(word))
	{
		printf("%s is in our list of words\n", word);
	}
	else
	{
		printf("%s is not in our list of words\n", word);
	}


	

}

void printLongestWord()
{
	char longestWord[100];
	int length = 0;
	int i = 0;

	for (i = 0; i < nwords; i++) {
		if (strlen(words[i]) > length) {
			length = strlen(words[i]);
			strcpy_s(longestWord, words[i]);
		}

	}

	printf("\nLongest word is %s, with %d characters \n", longestWord, length);


}

int findWord(char word[])
{
	int i = 0;

	for (i = 0; i < nwords; i++) {
		if (strcmp(words[i], word) == 0) {
			
			return 1;
		}
		
	}
	return 0;
	
	
}


int findWordWithMostVowels()
{

	int j = 0;
	int i = 0;
	int nmax = 0;
	int maxi = 0;
	int count = 0;

	for (i = 0; i < nwords; i++) {
		count = 0;
		for (j = 0; j < strlen(words[i]); j++) {
			if (isVowel(words[i][j])) count++;

		}
		if (count > nmax) {
			nmax = count;
			maxi = i;
		}
	}
	return maxi;

}

int isVowel(char c)
{
	c = toupper(c);
	if ( c == 'A' || c == 'E' || c == 'I' ||  c == 'O' || c == 'U')
	{ 
		return 1;
	}
	else {
		return 0;
	}
}