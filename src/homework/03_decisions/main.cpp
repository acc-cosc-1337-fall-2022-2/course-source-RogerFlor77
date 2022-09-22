//write include statements
#include "decisions.h"
#include <iostream>
using namespace std;

int main() 
{
	int User_Choice;
	cout<< "Please select one of these options: \n";
	
	cout << "1 - Letter Grade using If \n";
	
	cout << "2 - Letter Grade using Switch \n";
	
	cout << "3 - Exit \n";

	cin >> User_Choice;

if (User_Choice == 1)
{
	int user_grade;

	cout << "Please enter the grade ";

	cin >> user_grade;

	cout << get_letter_grade_using_if(user_grade) << "\n";
}

else if (User_Choice == 2)
{
	int user_grade;

	cout << "Please enter the grade ";

	cin >> user_grade;

	cout << get_letter_grade_using_switch(user_grade) << "\n";
}

else if (User_Choice == 3)
{
	cout << "You have chosen to exit this program, thank you and goodbye!";
}	
	
else if (User_Choice != 1 && User_Choice != 2 && User_Choice != 3)
{
	cout << "This is not a valid option from the menu \n";
}	
	return 0;
}