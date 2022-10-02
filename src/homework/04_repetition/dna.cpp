//add include statements
#include <string>
#include "dna.h"
using std::string;

//add function code here
int factorial(int num) 
{
  int sum = num;
    while (num > 1)
  {
    num--;
    sum *= num;
  }
  return sum;
}


int gcd(int num2, int num3) 
{
   while(num2 != num3)
{
  if (num2 < num3)
{
  num2 = num2+num3;
  num3 = num2 - num3;
  num2 = num2 - num3;
}
if (num2 > num3)
{
  num2 = num2-num3;
}
}
return num2;

}