#include <iostream>
#include <string>

using namespace std;

class Sequence
{

Sequence (string);
~Sequence;
int length;
int numberOf(char);
string longestConsecutive();
string longestRepeated();

private:
  string dna;
  int len;

};
