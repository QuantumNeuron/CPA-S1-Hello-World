#include <stdio.h> 

int main() {
	int num = 0, user = 0;
	for (num = 0; num < 5; num = num + 1) {
		printf("Enter a number:");
		scanf("%d", &user);
		
			
		if (user == 7) {
			printf("You got it!");
			return 0;
		}
		else
			printf("Wrong!");
	}
	printf("Exceeded the number of tries");
	return 0;
}