/*Programmer:	Peter Gajos 
Program Name:	Homework 5
Date:			02/04/2017
Purpose:		Ask user for any character and display 
				it as many times as they want*/


#include <stdio.h>
int main() {
	char userChar = 'a'; //Declare and initialize variables
	int userInt = 0, counter = 0, newLine = 0;

	printf("Enter a character:"); //Ask for user input 
	scanf("%c", &userChar); //Store input 
	printf("Enter the number of characters to display:");
	scanf("%d", &userInt);

	for (counter = 1; counter <= userInt; counter++) { //For loop to iterate character
		printf("%c", userChar); //User Output 
		newLine = counter % 10;  //Calculation for new-line 

		if (newLine == 0) //If Statement to insert new-line 
			printf("\n");
		if (counter == userInt)
			printf("\n");
	}

}