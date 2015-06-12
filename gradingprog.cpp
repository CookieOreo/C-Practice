/*
Author: Raymond Chen 
Description: Grading Program Practice. Mon June 8th 2015

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/

#include <iostream>
using namespace std;

int main(){
	int grade;
	cin >> grade;
	while (grade < 0 || grade > 100){
		cout << "Please enter a valid grade from 0 - 100." << endl;
		cin >> grade;
	}

	if (grade == 100){
		cout << "Congratulations! You've recieved a perfect score." << endl;
	}
	else if (grade >= 90 && grade <= 100){
		cout << "You've scored a letter grade of an A." << endl;
	}
	else if (grade >= 80 && grade <= 89){
		cout << "You've scored a letter grade of a B." << endl;
	}
	else if (grade >= 70 && grade <= 79){
		cout << "You've scored a letter grade of a C." << endl;
	}
	else if (grade >= 60 && grade <= 69){
		cout << "You've scored a letter grade of a D." << endl;
	}
	else if (grade >= 0 && grade <= 59){
		cout << "You've scored a letter grade of an F." << endl;
	}
return 0;
}

