#include<iostream>
using namespace std;
class student{
 public:
 int rollno;
 long long int phone;
 string address;
 };
 int main()
 {
  student sam,john;
  sam.rollno = 1;
  sam.phone = 7890675432;
  sam.address = "DELHI";
  john.rollno = 5;
  john.phone = 9876005432;
  john.address = "DEHRADUN";
  cout << "Sam details :- " << sam.rollno << " " << sam.phone << " " << sam.address << " " << endl;
  cout << "John details :- " << john.rollno << " " << john.phone << " " << john.address << " " << endl;
  return 0;
  }
  
