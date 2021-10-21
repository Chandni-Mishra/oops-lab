#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
  if(n==0)
  return 1;
  else
  return(n*fact(n-1));
  }
 int main()
 {
   int num,f;
   cout << "Enter number you want factorial of:" << endl;
    cin >> num;
    f=fact(num);
    cout << "Factorial of number is : " << f << endl;
    return 0;
    }
    
