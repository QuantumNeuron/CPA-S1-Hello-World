/*
Name:Peter Gajos
Student number: 034055053
Email:pgajos@myseneca.ca
Workshop:Workshop 4
Section:SII
Date:02/12/2017
Program: Temperature Analyzer - @Home
Desciption: Take temperatures and display highest, lowest and mean. 
*/

#include <stdio.h>
#define NTEMPS 10
int main() {
	int high[NTEMPS] = { 0 }, low[NTEMPS] = { 0 }; //Initializing and declaring arrays
	int userCount = 0, count = 0, userIn = 0; //Initializing and declaring variables
	//int highT = 0, lowT = 0, dayHigh = 0, dayLow = 0; //Variables for high/low day calculations --Asked for and never used?
	float average = 0;

	printf("---=== IPC Temperature Analyzer V2.0 ===---"); //Welcome text
		
		printf("\nPlease enter the number of days, between 3 and 10, inclusive: "); //Asking for user input 
		scanf("%d", &userCount); //User input 
		printf("\n");

		while (userCount > 10 || userCount < 3) { //Error checking loop
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
			scanf("%d", &userCount);
			printf("\n");
		}

		userCount = userCount - 1; //Simple calculation preparing variable for loops

		for (; count <= userCount; count++) { //For loop asking for high low temperatures 
			printf("Day %d - High: ", count + 1);
			scanf("%d", &high[count]);
			printf("Day %d - Low: ", count + 1);
			scanf("%d", &low[count]);

			if (high[count] < low[count] || high[count] > 40 || low[count] < -40) { //BONUS Error temperature checking. 
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
				high[count] = 0;
				low[count] = 0; 
				count--; 
			}
		}
		
		//highT = high[0]; //Setting first high temperature 
		//lowT = low[0]; //Setting first low temperature 
		
		//for (count = 0; count <= userCount; count++) { //Loop to find high and low temperature and day 
			//if (high[count] > highT) { 
				//highT = high[count];
				//dayHigh = count + 1;	
			//}
			//if (low[count] < lowT) {
				//lowT = low[count]; 
				//dayLow = count + 1; 
			//}
		//}
				 		
		printf("\nDay  Hi  Low");  

		for (count = 0; count <= userCount; count++) { //Iteration for array output 
			printf("\n");
			printf("%d    %d    %d", count + 1, high[count], low[count]);//Output for day and hight and low temperatures 
		}

		printf("\n"); //Formatting
						
	while (userIn >= 0) { //While loop runs until user chooses negative number 
			average = 0; //Resetting average for the loop 
			printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", userCount + 1);
			scanf("%d", &userIn);
			while (userIn == 0 || userIn > userCount + 1) { //Error checking loop
				printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", userCount + 1);
				scanf("%d", &userIn);
			}
			for (count = 0; count < userIn; count++) { //For loop to find average
				average += low[count] + high[count] ; //1st part of Average calculation
			}
			average = average / (userIn * 2); //2nd part of Average Calculation 
			if (userIn >= 1) //Prevents user getting average while quiting 
			printf("\nThe average temperature up to day %d is: %.2f\n", userIn, average);
		} 
	
	printf("\nGoodbye!\n");
	return 0;
}



