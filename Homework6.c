/*Programmer:	Peter Gajos
Program Name:	Homework 6
Date:			02/08/2017
Purpose:		Program that will calculate and display the average,
				highest, and lowest mark in the class of 40 students */

#include <stdio.h>
#define NUMS 40 //Global constant defining amount of Students 
int main() {
	int student[NUMS] = { 0 }; //Variable declarations and initializations 
	int counter = 0, sNumHigh = 0, sNumLow = 0;
	float studGrade[NUMS] = { 0 };
	float grade = 0, high = 0, low = 0, average = 0;

	printf("Student Average and High Low Grade Calculator\n"); //Welcome

	for (; counter < NUMS; counter++) { //For loop asking for user input 
		printf("Enter student's #%d identification number:", counter + 1);
		student[counter] = 100000 + counter; //Automatic Student Counter -- For the sake of not typing so many numbers in this example, delete and replace with 'scanf("%d", &student[counter]);' in final release. 
		printf("%d", student[counter]); //Automatic Student Counter -- Delete in final release, read note above.
		printf("\nEnter a grade for student %d:", student[counter]); //Asking for grades.
		scanf("%f", &studGrade[counter]); //Grade Input 

		average += studGrade[counter]; //Adding grades to seperate variable 
	}

	high = studGrade[0]; //Setting first grade to check for highest grade 
	

	for (counter = 0; counter < NUMS; counter++) { //For loop to check highest grade 
		if (studGrade[counter] >= high) { //If grade is higher execute code
			high = studGrade[counter]; //Setting high grade 
			sNumHigh = student[counter]; //Setting student # for highest grade
		}
	}
	
	low = studGrade[0]; //Setting first grade to check for lowest grade

	for (counter = 0; counter < NUMS; counter++) { //For loop to check lowest grade
		if (studGrade[counter] <= low) { //If grade is lower execute code
			low = studGrade[counter]; //Setting low grade
			sNumLow = student[counter]; //Setting student # for lowest grade
		}
	}
	
	printf("\nThe average student mark is: %.2f", average / NUMS); //Average output with simple calculation 
	printf("\nStudent %d has the highest mark of:  %.f", sNumHigh, high); //Output highest mark and student #
	printf("\nStudent %d has the lowest mark of:  %.f", sNumLow, low);  //Output lowest mark and student #
	
	
	return 0;
}