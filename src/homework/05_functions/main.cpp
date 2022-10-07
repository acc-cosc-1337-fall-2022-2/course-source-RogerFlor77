#include "func.h"
#include <iostream>

using namespace std;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	string dna;
	string choice;
	int user_choice;
	string final_choice;
	string little_choice;

	do 
{
	cout << "Please enter a choice from the menu below: " "\n";
	cout << "1- Get GC Content" "\n";
	cout << "2- Get DNA Complement" "\n";
	cout << "3 - Exit" "\n";

	cin >> user_choice;

	if (user_choice == 1)
	{
	
	cout << "Enter your DNA Strand: ";

	cin >> dna;

	if (dna.length() == 8)
	{
		cout << "The GC decimal is: " << get_gc_content(dna);

		cout << "\nWould you like to enter another? Type Y to do it again, type N to quit: ";
	}
	
	else if (dna.length() < 8 || dna.length() > 8)
	{
		cout << "This is not a valid DNA strand. Type Y to do another, or type N to exit: ";
	}
	cin >> choice;

	if (choice == "N" || choice == "n")
		cout << "This program has now ended, thank you! ";
	}

	if (user_choice == 2)
	{
	
	cout << "Enter your DNA Strand: ";

	cin >> dna;

	if (dna.length() == 8)
	{
		cout << "Here is the reverse of your string: " << reverse_string(dna);

		cout << "\nNow here is the complement of your reversed string: " << get_dna_complement(dna);

		cout << "\nWould you like to enter another? Type Y to do it again, type N to quit: ";
	}
	
	else if (dna.length() < 8 || dna.length() > 8)
	{
		cout << "This is not a valid DNA strand. Type Y to do another, or type N to exit: ";
	}
	cin >> choice;

	if (choice == "N" || choice == "n")
		cout << "This program has now ended, thank you! ";
	}
	
	if (user_choice == 3)
	{
	
	cout << "Are you sure you want to quit? ";

	cin >> little_choice;

	if (little_choice == "Y" || little_choice == "y")
	{
		cout << "This program has now ended, thank you! ";

	}

	else if (little_choice == "n" || little_choice == "N")
	choice = "Y";

	} 
	} while (choice == "y" || choice == "Y");
	return 0;
} 

//