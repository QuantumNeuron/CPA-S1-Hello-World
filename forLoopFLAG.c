#include <stdio.h>
int main() {

	int user = 0, input = 0, fudge = 0;

for (user = 0; user < 10 && fudge == 0; user++)
{
	printf("This is #%d, press D to end loop", user);
	scanf("%d", &input);
	if (input == 11)
		fudge = 1; 
		
}	
}