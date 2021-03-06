#include "pch.h"
#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"


struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers);


int main()
{
	int i;

	struct customer customers[10];

	populateCustomers(customers, 10);

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	if (!(transaction(customers, 10001, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf("account number %d - transaction processed", 10001);
	}
	printf("\n\n");

	if (!(transaction(customers, 33, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf("account number %d  - transaction processed", 33);
	}
	printf("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	return 0;
}

int getDay(int month)
{
	int day, max = 31;

	if (month == 2) {													// Feb (28)
		day = rand() % (28 + 1 - 1) + 1;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {		// Apr, Jun, Sep, Nov (30)
		day = rand() % (30 + 1 - 1) + 1;
	}
	else {																// Jan, Mar, May, Jul, Aug, Oct, Dec (31)
		day = rand() % (31 + 1 - 1) + 1;
	}

	return day;
}

int getMonth()
{
	int month;

	month = rand() % (12 + 1 - 1) + 1;

	return month;
}

int getYear()
{

	int year;

	year = rand() % (2016 + 1 - 2013) + 2013;

	return year;
}

double getBalance()
{
	float balance;

	balance = rand() % (10001) + -5000;

	return balance;
}

void printCustomers(struct customer customers[], int nCustomers)
{
	int i;

	for (i = 0; i < nCustomers; i++) {
		printf("%25s\t%13d\t%12.2lf\t%d/\%d/\%d\n\n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans.day, customers[i].lastTrans.month, customers[i].lastTrans.year);
	}

	return;
}

void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = { "Haiden Soto","Oscar Hernandez","Heath Hickman","Reagan Mcknight","Noah Bartlett","Ross Day","Maribel Livingston","Jewel Phillips","Blake Gardner","Fernanda Ponce" };

	for (i = 0; i < nCustomers; i++)
	{
		strcpy_s(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;
		customers[i].balance = getBalance();

		struct date lastTrans;
		lastTrans.year = getYear();
		lastTrans.month = getMonth();
		lastTrans.day = getDay(lastTrans.month);

		customers[i].lastTrans = lastTrans;

	}

	return;

}

int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers)
{

	int i;

	for (i = 0; i < nCustomers; i++) {
		if (customers[i].accountNumber == accountNumber) {
			customers[i].balance += amount;
			return 1;
		}
	}

	return 0;
}