#include "Sequence.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include<ctime>
#include<vector>
using namespace std;

Sequence::Sequence(string filename)

 { ifstream file(filename.c_str,ios::in);
   string b;
    while(geline(file.b))
        dna+=b;
        len+=dna.length();
}



Sequence::~Sequence()
{

}


int Sequence::length()
{
    return len;
}

int Sequence::numberOf(char base)
{   int counter=0;
    for(int k=0;k<len;k++)
    { if (dna[k]==base)
        counter++;

    }
    retrun counter;
}

string Sequence::longestConsecutive()
{
    string L1;
    string L2;
    string temp=count;
    L1= a;
    char a = count[0];

    for(int m=0;i<count.length()+1;i++)
    {
        if(L2.length()>L1.length())
        {
            L1=L2;
        }

        if (a==count[i])
        {
            L2+=count[i];
        }

        else
        {
            a=count[i];
            L2=count[i];
        }



    }


    return L1;

}


