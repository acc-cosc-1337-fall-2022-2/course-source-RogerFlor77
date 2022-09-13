//write include statements
#include "data_types.h"
#include <iostream>
using std::cin, std::cout;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	int num1 = 4;
	int result;

	cout << "Please enter a number, this function will multiple whatever number you enter by the number 5 ";

	cin >> num;

	result = multiply_numbers((num));

	cout << "The result of your number multipled by 5 is " << result << "\n";

	result = multiply_numbers((num1));

	cout << "Now, the program will take 4 and multiply it by 5, and the result of that is " << result;

	return 0;
}
