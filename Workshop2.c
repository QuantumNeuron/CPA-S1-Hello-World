// Peter Gajos, 034055053, IPC144SII
#include <stdio.h>
int main() {
	int loonies = 0, quarters = 0, loonC = 0, amountInt = 0, quarterC = 0, dimes = 0, dimeC = 0, nickles = 0, nickleC =0, pennies = 0, pennyC =0;//Declare and initialize variables 
	double amount = 0, gst = 0, total = 0; 
	const int quarter = 25, dime = 10, nickle = 5, penny = 1; 

	printf("Please enter the amount to be paid: $"); //Ask user for input
	scanf("%lf", &amount); //User Input 

	
	gst = amount * .13 + .005; 
	
	amount = amount; 
	total = amount + gst; 
	loonies = total; //Calculation for loonie amount -- Narrowing 
	amountInt = total * 100; //Calculation to change value from double to an integer 
	loonC = amountInt % 100; //Modulus calculation for loonie change 
	quarters = loonC / quarter; //Calculation for quarter amount
	quarterC = loonC % quarter; //Modulus calculation for quarter change
	dimes = quarterC / dime;
	dimeC = quarterC % dime; 
	nickles = dimeC / nickle;
	nickleC = dimeC % nickle;
	pennies = nickleC / penny;
	pennyC = nickleC % penny;
	
	printf("GST: %.2lf\nBalance owing: $%.2lf", gst, total);
	printf("\nLoonies required: %d, balance owing $0.%d", loonies, loonC); //Output 
	printf("\nQuarters required: %d, balance owing $%1.2lf", quarters, (float)quarterC/100);
	printf("\nDimes required: %d, balance owing $%1.2lf", dimes, (float)dimeC/100);
	printf("\nNickels required: %d, balance owing $%1.2lf", nickles, (float)nickleC/100);
	printf("\nPennies required: %d, balance owing $%1.2lf\n", pennies, (float)pennyC/100);
	return 0; //Return Statement 
}
