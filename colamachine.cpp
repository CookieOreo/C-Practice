/*
Author: Raymond Chen 
Description: Cola Machine Practice. Mon June 8th 2015

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."
*/

#include <iostream>
using namespace std;

int main(){
	int choice;
	cout << "Here are a list of choices:" << endl;
	cout << "---------------------------" << endl;
	cout << "1 = Pepsi" << endl;
	cout << "2 = Coke" << endl;
	cout << "3 = Lemonade" << endl;
	cout << "4 = Apple Juice" << endl;
	cout << "5 = Coconut Water" << endl;
	cout << "Please choose a beverage by entering a number 1-5." << endl;
	cin >> choice;
	switch (choice){
		case 1:
		cout << "You have chosen Pepsi." << endl;
		break;

		case 2:
		cout << "You have chosen Coke." << endl;
		break;

		case 3:
		cout << "You have chosen Lemonade." << endl;
		break;

		case 4:
		cout << "You have chosen Apple Juice." << endl;
		break;

		case 5:
		cout << "You have chosen Coconut Water." << endl;
		break;
	}
	if (choice < 1 || choice > 5){
		cout << "Error! Choice was not valid, here is your money back." << endl;
	}

	return 0;
}
