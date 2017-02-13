#include <stdio.h> 
int main() {
	//Declaring and Initializing Variables 
	int children = 0, adults = 0, kidAge = 0, groupNumber = 0;
	float childPrice = 0, total = 0, totalTax = 0, discount = 0, taxes = 0;
	const float adultPrice = 79.99f;
	char user = 'a';


	while (user != 'Q' && user != 'q') { //Program will loop unless user wants to quit 
		//Ask for user input 
		printf("\nEnter the number of adults:");
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
			continue; //Doesn't quit anymore restarts code block 
		}
		else if (kidAge <= 12 && kidAge >= 6) {
			childPrice = adultPrice * 0.9; //Setting child price if child is between 6-12 
		}
		else if (kidAge < 6)
			childPrice = 0; //Setting child price to free if under 6 

		groupNumber = adults + children;//Group Calculation
		total = (adults * adultPrice) + (children * childPrice); //Total Before Taxes
		taxes = 1.15; //Setting Tax Variable 

		if (groupNumber > 20) { //Large Group Calculation 
			total = total * .95; //5% group discount 
			if (children >= adults) 
				taxes = 1; //Setting taxes to 0 if there are more children then adults 
		}
		
		totalTax = total * taxes; //Total After Taxes

								 
		printf("\nThe total before taxes: $%.2f", total);  //Output
		printf("\nThe total including taxes: $%.2f\n", totalTax);
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
		printf("Press Q or q to exit, or press any other character to continue:"); //Asking if user wants to quit
		scanf("\n%c", &user);
		//Return Statement
	} 
	return 0;
}