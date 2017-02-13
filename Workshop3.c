/*
Name:Peter Gajos	
Student number:
Email:pgajos@myseneca.ca
Workshop:Workshop 3 
Section:SII
Date:02/05/2017
*/
#include <stdio.h>
#define NUMS 4 //Declare Constant called NUMS

int main() {
	int counter = 1, tempHigh = 0, tempLow = 0, cond = 0, recHigh = 0, r_Hday = 0, recLow = 0, r_Lday = 0; //Declare and initialize variables 
	float sumHigh  = 0, sumLow = 0, tempMean = 0;

	printf("---=== IPC Temperature Analyzer ===---"); //Title 
	
	for (; counter <= NUMS; counter++) { //For loop iteration asking for user input NUMS times
		
			printf("\nEnter the high value for day %d: ", counter);
			scanf("%d", &tempHigh); //User Input
			printf("\nEnter the low value for day %d: ", counter);
			scanf("%d", &tempLow);
			
			cond = tempHigh <= 40 && tempLow >= -40 && tempHigh > tempLow ? 0 : 1; //Conditional Expression checking input values

		if (cond == 1) { //While loop to reject inappropriate values
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			tempHigh = 0; //Reseting Variable Values
			tempLow = 0;
			counter--; //Resetting Counter to go back 1 input 
			} 
			
		if (tempHigh > recHigh) { //If statement checking Higest Temperature 
			recHigh =  tempHigh;
			r_Hday = counter;
		}

		if (tempLow < recLow) { //If statement checking Lowest Temperature 
			recLow = tempLow; 
			r_Lday = counter; 
		}

		
		sumHigh += tempHigh; //Adding variables within loop to sum
		sumLow += tempLow;
	}
	
	tempMean = (sumLow + sumHigh) / (NUMS * 2); //Calculation for mean 
	

	printf("\nThe average (mean) temperature was: %.02f\n", tempMean); //User output 
	printf("The highest temperature was %d, on day %d\nThe lowest temperature was %d, on day %d\n", recHigh, r_Hday, recLow, r_Lday);
	
	return 0;		
	}
	








