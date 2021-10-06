/* Program for comparing two strings */

#include<iostream>
using namespace std;
int main()
{
  string a;
  string b;
  cout << "Enter the first string" << endl;
  cin >> a ;
  cout << "Enter the second string" << endl;
  cin >> b;
  if(a.compare(b)==0)
     {
        cout << "Both strings are equal" << endl;
     }
    else
    {
       cout << "Strings are unequal"  << endl;
     }
  return 0;
  }
