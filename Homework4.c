/*	Programmer: Peter Gajos 
	Program Name: Homework 4
	Date: January 28th 2017
	Purpose: Calculate Salary, Raise 
	and New Salary for 5 emloyees */

#include <stdio.h>
main() {
	int emp = 0, salary = 0, newSal = 0, raise = 0; //Declare and Initialize Variables

	for (emp = 1; emp < 6; emp = emp + 1) { //For Loop Executing Code 5 Times
		printf("Enter employee #%d's monthly salary: $", emp); //Asking for User Input
		scanf("%d", &salary); //User Input 
		printf("-----------------------------------------------\n");

		if (salary < 2000) //If Statement for Salaries Under 2000 
			raise = 150; //Changing Raise Variable 

		else if (salary >= 2000 && salary <= 5000) //If Statement for Salaries Between 2000-5000
			raise = 250; //Changing Raise Variable 
		else
			raise = 0; //Else does not give any raise 
			 
		newSal = salary + raise; //Calculation for New Salary 
		printf("Employee #%d\n Old Salary: $%d\n Raise: $%d\n New Salary: $%d\n", emp, salary, raise, newSal); //Output
		printf("===============================================\n");
		}


	return 0; 
}