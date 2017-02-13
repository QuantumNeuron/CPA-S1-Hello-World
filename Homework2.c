/*	Programmer: Peter Gajos
	Program Name: Homework2.c
	Date: January 23rd, 2017
	Purpose: Calculating the total price of Wonderland Tickets	*/

#include <stdio.h>

int main() {
	
	//Declaring and Initializing Variables 
	int children = 0, adults = 0, kidAge = 0;
	float childPrice = 0, total = 0, totalTax = 0; 
	const float adultPrice = 79.99f;
	
	//Ask for user input 
	printf("Enter the number of children:");
	scanf("%d", &children);
	printf("Age of children:")
	scanf("%d", &kidAge);
	printf("Enter the number of adults:");
	scanf("%d", &adults); 
	
	//Calculations
	childPrice = (adultPrice * 0.9); //Price of a child ticket
	total = (adults * adultPrice) + (children * childPrice); //Total Before Taxes
	totalTax = total * 1.15; //Total After Taxes
	
	//Output
	printf("\nThe total before taxes: $%.2f", total);
	printf("\nThe total including taxes: $%.2f\n", totalTax);
	
	//Return Statement
	return 0; 
}