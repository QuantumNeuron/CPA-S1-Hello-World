/*Program*/

#include <stdio.h>

int main() {
	while (user!= 'Q' || user != 'q') {
		//Declaring and Initializing Variables 
		int children = 0, adults = 0, kidAge = 0;
		float childPrice = 0, total = 0, totalTax = 0;
		const float adultPrice = 79.99f;
		char user = 'a';

		//Ask for user input 
		printf("Enter the number of adults:");
		scanf("%d", &adults);
		printf("Enter the number of children:");
		scanf("%d", &children);

		//Condition asking age of children if user has 1 or more children
		if (children >= 1) {
			printf("Age of children:");
			scanf("%d", &kidAge);
		}

		//Main Conditional If statement 
		if (kidAge > 12) {
			printf("ERROR: Child must purchase Adult ticket!\n"); //Error if child is older then 12
			return 0;
		}
		else if (kidAge <= 12 && kidAge >= 6) {
			childPrice = (adultPrice * 0.9); //Setting child price if child is between 6-12 
		}
		else if (kidAge < 6)
			childPrice = 0; //Setting child price to free if under 6 


		//Calculations
		total = (adults * adultPrice) + (children * childPrice); //Total Before Taxes
		totalTax = total * 1.15; //Total After Taxes

		//Output
		printf("\nThe total before taxes: $%.2f", total);
		printf("\nThe total including taxes: $%.2f\n", totalTax);
		printf("Press Q or q to exit")
		scanf("%c", &user);
		//Return Statement
		
	} 
	return 0;
}