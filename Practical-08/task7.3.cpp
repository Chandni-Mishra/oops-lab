#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  }
  int main()
  {
    int a=10,b=20;
    cout << "Value before swapping " << endl;
    cout << "a = " << a << " b = " << b << endl;
    swap(&a,&b);
    cout << "Value after swapping is " << endl;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
    }
