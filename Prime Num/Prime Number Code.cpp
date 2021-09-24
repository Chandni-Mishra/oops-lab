#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int num, i, count = 1;
cout <<"Enter the number : ";
cin >> num;
for(i = 2; i <= sqrt(num); i++)
{
if(num % i == 0)
{
count =0;
break;
}
}
if(count == 1)
{
cout << num << " is a prime number.\n";
}
else
{
cout << num << " is not a prime number.\n";
}
return 0;
} 

