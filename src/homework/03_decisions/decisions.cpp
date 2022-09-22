//write include statement for decisions header
#include "decisions.h"
#include <string>

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string MIN_SCORE;
if (grade >= 90 && grade <= 100)
{
    MIN_SCORE = "A";
}
else if (grade >= 80 && grade < 90)
{
    MIN_SCORE = "B";
}
else if (grade >= 70 && grade < 80)
{
    MIN_SCORE = "C";
}
else if (grade >= 60 && grade < 70)
{
    MIN_SCORE = "D";
}
else if (grade >= 0 && grade < 60)
{
    MIN_SCORE = "F";
}
else if (grade < 0 || grade > 100)
{
    MIN_SCORE = "This is not a valid score";
}

return MIN_SCORE;
}

string get_letter_grade_using_switch(int grade)
{
string SWITCH_MIN_SCORE;

switch (grade)
{
    case 90 ... 100:
        SWITCH_MIN_SCORE = "A";
        break;

    case 80 ... 89:
        SWITCH_MIN_SCORE = "B";
        break;
    
    case 70 ... 79:
        SWITCH_MIN_SCORE = "C";
        break;

    case 60 ... 69:
        SWITCH_MIN_SCORE = "D";
        break;

    case 0 ... 59:
        SWITCH_MIN_SCORE = "F";
        break;
    
    default:
        SWITCH_MIN_SCORE = "Your repsonse was invalid.";
        break;
}

    return SWITCH_MIN_SCORE; 
}