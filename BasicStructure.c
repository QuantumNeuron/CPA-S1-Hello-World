#include <stdio.h>

struct customers {
	char initial;
	float price;
	int day;
};

int main() {
	struct customers a = { 'P', 22.22, 3 };
	/*printf("Please enter the first intial: ");  //Couldn't get code to function will fix tomorrow 
	scanf("%c", &a.initial);
	printf("Please enter the amount the customer paid: ");
	scanf("%f", &a.price);
	printf("Please enter the day of the pruchase: ");
	scanf('%d', &a.day);*/

	printf("The customer %c paid %f on %d", a.initial, a.price, a.day);
	return 0;
}