//add include statements
#include <string>
#include "func.h"
using std::string;
//add function code here

double get_gc_content(const string dna)
{
  double counter = 0;
  int i; 
  double division_answer;

  for (int i = 0; i < dna.length(); i++)
  {
    if (dna[i] == 'C' || dna[i] == 'c' || dna[i] == 'g' || dna[i] == 'G')
    {
      counter++;
    }
  }

  division_answer = counter / dna.length();

 return division_answer;
}

string reverse_string(string dna)
{
  int i; 
  string reverse_of_dna = dna;

  for (int i = 0; i < dna.length(); i++)
  {
    if (dna[i] == 'A' || dna[i] == 'a' || dna[i] == 'T' || dna[i] == 't' || dna[i] == 'G' || dna[i] == 'g' || dna[i] == 'C' || dna[i] == 'c')
    {
      dna[i] = reverse_of_dna[(dna.length()-1) - i];
    }
  }
  return dna;
}

string get_dna_complement(string dna)
{
  dna = reverse_string(dna);
  for (int i = 0; i < dna.length(); i++)
  {
    if (dna[i] == 'A' || dna[i] == 'a')
    {
      dna[i] = 'T';
    }
    else if (dna[i] == 'T' || dna[i] == 't')
    {
      dna[i] = 'A';
    }
    else if (dna[i] == 'G' || dna[i] =='g')
    {
      dna[i] = 'C';
    }
    else if (dna[i] == 'C' || dna[i] == 'c')
    {
      dna[i] = 'G';
    }
  }
  return dna;
}
