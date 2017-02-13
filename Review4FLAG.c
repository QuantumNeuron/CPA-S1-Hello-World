#include <stdio.h> 

int main() {
	int num = 0, user = 0, flag = 0; 
	for (num = 0; num < 5 && flag = 1; num = num + 1) {
		printf("Enter a number:");
		scanf("%d", &user);
		
			
		if (user == 7) {
			printf("You got it!");
			flag = 0
		}
		else
			printf("Wrong!");
	}
	if (num == 5)
	printf("Exceeded the number of tries");
	return 0;
}