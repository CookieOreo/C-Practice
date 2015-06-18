/*
Author: Raymond Chen 
Description: Bracketing Search. Thurs June 18th 2015

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
psudo random numbers

Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
The program must let the user continue to guess until the user correctly guesses the number.

★ Modify the program to output how many guesses it took the user to correctly guess the right number.

★★ Modify the program so that instead of the user guessing a number the computer came up with, 
the computer guesses the number that the user has secretely decided. The user must tell the computer whether it guessed too high or too low.

★★★★ Modify the program so that no matter what number the user thinks of (1-100) the computer can guess it in 7 or less guesses. 
Note: 100 different options is covered by 2^7 which is 128 so 7 guesses to get it at most. 
If we wanted 1-1000 then we can cover it with 2^10=1024 options.
*/ 
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	char choice;
	cout << "Please select an option:" << endl;
	cout << "------------------------" << endl;
	cout << "Enter 'a' if you want to guess a number that the computer creates." << endl;
	cout << "Enter 'b' if you want the computer to guess your number." << endl;
	cin >> choice;
	while (choice != 'a' && choice != 'b'){
		cout << "Please enter a valid choice." << endl;
		cin >> choice;
	}
	if(choice == 'a'){
		int seed = time(NULL);
		srand(seed); // set the seed
		//creates a number to guess from 1- 100.
		int number = (rand() % 100) + 1;
		int guess = 0;
		int tries = 1;
		cout << "Please enter the number you think the computer had in mind." << endl;
		cin >> guess;
		//presents the two possibilities, either too high or too low and increments number of tries.
		while (guess != number){
			if(guess > number){
				cout << "Your guess is too high, try a smaller number." << endl;
			}
			else if(guess < number){
				cout << "Your guess is too low, try a larger number." << endl;
			}
			cin >> guess;
			tries ++;
		}
		cout << "Congratulations! You've guessed the correct number which was " << number << "." << endl;
		if (tries == 1){
			cout << "Wow! It only took you one try to guess it correctly!" << endl;
		}
		else{
			cout << "It took you " << tries << " tries to guess it correctly." << endl;
		}
	}
	if(choice == 'b'){
		int guess = 50;
		char position;
		int tries = 1;
		int highest = 100;
		int lowest = 0;
		cout << "Okay, please select a number from 1-100." << endl;
		cout << "Is the number " << guess << "?" << endl;
		cout << "If the computer has guessed too high, enter the letter'h'." << endl;
		cout << "If the computer has guessed too low, enter the letter 'l'." << endl;
		cout << "If the computer has guessed correctly, enter the letter 'c'." << endl;
		cin >> position;
		//God Bless Alexay Nikolaev for a working solution!
		while (position != 'c'){
			if (position == 'h'){
				highest = guess - 1;
			}
			else if (position == 'l'){
				lowest = guess + 1;
			}
			//cut the number of possible options by using this equation every time 
			guess = lowest + (highest - lowest) / 2;
			cout << "Is the number " << guess << "?" << endl;
			cout << "If the computer has guessed too high, enter the letter'h'." << endl;
			cout << "If the computer has guessed too low, enter the letter 'l'." << endl;
			cout << "If the computer has guessed correctly, enter the letter 'c'." << endl;
			cin >> position;
			tries++;
		}
		cout << "The number that you chose for the computer to guess was " << guess << "." << endl;
		if (tries == 1){
			cout << "Wow! The computer guessed your number in one try!" << endl;
		}
		else{
			cout << "The computer took " << tries << " tries to guess your number." << endl;
		}
	}
	return 0;
}