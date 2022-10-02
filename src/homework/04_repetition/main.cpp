//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int user_choice;
	int num;
	int num2;
	int num3;
	string again;

	do 
{
	cout << "Please enter a choice from the menu below: " "\n";
	cout << "1 - Factorial" "\n";
	cout << "2 - Greatest Common Divisor" "\n";
	cout << "3 - Exit" "\n";

	cin >> user_choice;

	if (user_choice == 1)
	{
	cout << "Please enter a number that you would like to find its factorial for: ";

	cin >> num;

	cout << "The factorial of " << num << " is " << factorial(num) << "\n";

	cout << "Do you want to quit the program? Please type Y or N ";

	cin >> again;

	if (again == "y" || again == "Y")
	{
		cout << "The program has ended";
	}

	} 
	else if (user_choice == 2)
	{
	cout << "Please enter your first number: ";

	cin >> num2;

	cout << "Please enter your second number: ";

	cin >> num3;

	cout << "The greatest common divisor of your two numbers is " << gcd(num2, num3) << "\n";

	cout << "Do you want to quit the program? Please type Y or N ";

	cin >> again;

	if (again == "y" || again == "Y")
	{
		cout << "The program has ended";
	}
	
	}
	else if (user_choice == 3)
	{
	cout << "Are you sure you want to quit?";

	cin >> again;

	if (again == "y" || again == "Y")
	{
		cout << "The program has ended";
	}
	}
} while (again == "N" || again == "n");
return 0;
}