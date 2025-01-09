#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

void addition() {
	int number(0);
	float x(0);
	float sum(0);

	cout << "How many numbers do you want to add: ";
	cin >> number;

	if(cin.fail() || number <= 0) {
    	cout << "Invalid input!" << endl;
    	return;
	}

	vector<float> calc(number);
	for(int i = 0; i < number; i++) {
    	cout << "Type your number: ";
    	cin >> x;

    	if(cin.fail()) {
        	cout << "Invalid input! Please enter a valid number." << endl;
        	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');
        	i--;
        	continue;
    	}

    	calc[i] = x;
    	sum += calc[i];
	}
	cout << "The result is: " << sum << endl;
}

void subtraction() {
	int number(0);
	float x(0);
	float sub(0);

	cout << "How many numbers do you want to subtract: ";
	cin >> number;

	if(cin.fail() || number <= 0) {
    	cout << "Invalid input!" << endl;
    	return;
	}

	vector<float> calc(number);
	for(int i = 0; i < number; i++) {
    	cout << "Type your number: ";
    	cin >> x;

    	if(cin.fail()) {
        	cout << "Invalid input! Please enter a valid number." << endl;
        	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');
        	i--;
        	continue;
    	}

    	calc[i] = x;
	}

	sub = calc[0];

	for(int i = 1; i < number; i++) {
    	sub -= calc[i];
	}

	cout << "The result is: " << sub << endl;
}

void multiplication() {
	int number(0);
	float x(0);
	float mult(1);

	cout << "How many numbers do you want to multiply: ";
	cin >> number;

	if(cin.fail() || number <= 0) {
    	cout << "Invalid input!" << endl;
    	return;
	}

	vector<float> calc(number);
	for(int i = 0; i < number; i++) {
    	cout << "Type your number: ";
    	cin >> x;

    	if(cin.fail()) {
        	cout << "Invalid input! Please enter a valid number." << endl;
        	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');
        	i--;
        	continue;
    	}

    	calc[i] = x;
    	mult *= calc[i];
	}
	cout << "The result is: " << mult << endl;
}

void division() {
	float x(0), y(0), div(0);

	cout << "Enter the numerator: ";
	cin >> x;
	cout << "Enter the denominator: ";
	cin >> y;

	if(cin.fail() || y == 0) {
    	cout << "Invalid input or division by zero!" << endl;
    	return;
	}

	div = x / y;

	cout << "The result is: " << div << endl;
}

void power() {
	float x(0), y(0), pwr(0);

	cout << "Enter the base number: ";
	cin >> x;
	cout << "Enter the exponent: ";
	cin >> y;

	if(cin.fail()) {
    	cout << "Invalid input!" << endl;
    	return;
	}

	pwr = pow(x, y);

	cout << "The result is: " << pwr << endl;
}

void squareRoot() {
	float x(0), sqrtResult(0);

	cout << "Enter the number to find its square root: ";
	cin >> x;

	if(cin.fail() || x < 0) {
    	cout << "Invalid input or negative number for square root!" << endl;
    	return;
	}

	sqrtResult = sqrt(x);

	cout << "The result is: " << sqrtResult << endl;
}

void menu() {
	int choice(0);
	while(true) {
    	cout << "--- Menu ---" << endl;
    	cout << "1 - Addition" << endl;
    	cout << "2 - Subtraction" << endl;
    	cout << "3 - Multiplication" << endl;
    	cout << "4 - Division" << endl;
    	cout << "5 - Power" << endl;
    	cout << "6 - Square Root" << endl;
    	cout << "7 - Exit" << endl << endl;

    	cin >> choice;

    	if(cin.fail()) {
        	cout << "Invalid choice!" << endl;
        	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');
        	continue;
    	}

    	if(choice == 1){
        	addition();
    	}
    	else if(choice == 2) {
        	subtraction();
    	}
    	else if(choice == 3) {
        	multiplication();
    	}
    	else if(choice == 4) {
        	division();
    	}
    	else if(choice == 5) {
        	power();
    	}
    	else if(choice == 6) {
        	squareRoot();
    	}
    	else if(choice == 7) {
        	cout << "Goodbye!" << endl;
        	break;
    	} else {
        	cout << "Invalid choice" << endl << endl;
    	}
	}
}

int main() {
	menu();
}
