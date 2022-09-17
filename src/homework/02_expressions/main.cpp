//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout << "Please enter how much the meal cost: $";

	cin >> meal_amount;

	get_sales_tax_amount(meal_amount);

	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "Please enter how much the tip rate is. If it is a percentage, please type it in decimal form. For example, a 15% tip would be .15: ";

	cin >> tip_rate;

	get_tip_amount(meal_amount, tip_rate);

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal Amount: $" << meal_amount << "\n" << "Sales Tax: $" << tax_amount << "\n" << "Tip Amount: $" << tip_amount << "\n" << "Total: $" << total << "\n";

	return 0;
}
