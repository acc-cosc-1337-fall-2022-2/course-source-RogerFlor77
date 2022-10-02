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
   if (num2 == 0 || num3 == 0)
   {
   return 0;
   }
   else if (num2 == num3)
   {
   return num2;
   }
   else if (num2 > num3)
   {
   return gcd(num2-num3, num3);
   }
   else 
   {
    return gcd(num2, num3-num2);
   }
}