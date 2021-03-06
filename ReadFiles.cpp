#include <stdio.h>
#include <string.h>
#include "pch.h"
#include <iostream>

struct Order {
	char date[15];
	char region[15];
	char rep[10];
	char item[15];
	int units = 0;
	float cost = 0;
	float totalCost = 0;
};

struct Order orders[100];
float findTotal(char searchTerm[15], int n);
int loadOrdersFromFile();

int main() {
	char searchTerm[15];
	int n = loadOrdersFromFile();
	for (;;) {
		printf("Enter Product Name <or return to quit>: ");
		gets_s(searchTerm);
		if (searchTerm[0] == 0) {
			break;
		}
		float total = findTotal(searchTerm, n);

		if (total > 0) {
			printf("Total sales for %s: %.2f\n", searchTerm, total);
		}
		else {
			printf("Item Not Found! Please Try Again!\n");
		}
	}
}

float findTotal(char searchTerm[15], int n) {
	float total = 0;
	for (int i = 0; i < n; i++) {
		int f = strcmp(orders[i].item, searchTerm);
		if (f == 0) {
			total += orders[i].totalCost;
		}
	}
	return total;
}

int loadOrdersFromFile() {
	FILE *file;
	file = fopen("C:\\Users\\f14ch\\OneDrive\\Documents (Parent)\\Documents\\College\\Programming CT103\\Programming\\C Applications\\ReadFiles\\SampleData.txt", "r");
	int ordersCount = 0;
	if (file == NULL) {
		printf("Error reading file");
	}
	for (int i = 0; !feof(file); i++) {
		fscanf(file, "%s", &orders[i].date);
		fscanf(file, "%s", &orders[i].region);
		fscanf(file, "%s", &orders[i].rep);
		fscanf(file, "%s", &orders[i].item);
		fscanf(file, "%d", &orders[i].units);
		fscanf(file, "%f", &orders[i].cost);
		fscanf(file, "%f\n", &orders[i].totalCost);
		ordersCount++;
	}
	return ordersCount;
}