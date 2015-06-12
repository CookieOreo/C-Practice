/*
Author: Raymond Chen 
Description: Pancake Glutton. Mon June 9th 2015

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
arrays

Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.

★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
Person 8: ate 4 pancakes
...
Person 5: ate 0 pancakes
*/ 

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int x;
	int maxperson = 0;
	int max = 0;
	int minperson = 0;
	int min = 0;
	vector <int> amounts;
	for (int i = 1; i <= 10; i++){
		cout << "Please enter the number of pancakes that Person " << i << " ate for breakfast." << endl;
		cin >> x;
		amounts.push_back(x);
		if (x > max){
			max = x;
			maxperson = i;
		}
		else if (x < min){
			min = x;
			minperson = i;
		}
	}
	cout << "Person " << maxperson << " ate the most pancakes for breakfast." << endl;
	cout << "Person " << minperson << " ate the least amount of pancakes for breakfast." << endl;
	cout << endl;
	cout << "List of people who ate pancakes from greatest amount to least:" << endl;
	cout << "--------------------------------------------------------------" << endl;
	max = 0;
	maxperson = 0;
	for (int k = 0; k < 10 ; k++){
		for (int j = 0; j < 10; j++){
			if (amounts[j] > max){
			max = amounts[j];
			maxperson = j + 1;
			}
		}
		cout << "Person " << maxperson << ": ate " << max << " pancakes." << endl;
		amounts[maxperson - 1] = -1;
		maxperson = 0;
		max = 0;
	}
	return 0;
}