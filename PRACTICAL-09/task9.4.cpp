#include <iostream>
#include <cstring>
using namespace std;

class student
{
    private:
	string name;
	int age;
	int marks;
	public:
		friend void temp( student );  
		void getdetails()
		{
		    cout << "name :- "<<name<<endl;
	        cout << "age :- "<<age<<endl;
	        cout << "marks :- "<<marks<<endl;
		}
};

void temp( student s )     
{
    
    cout << "name :- ";
	cin >> s.name;
	cout << "age :- ";
	cin >> s.age;
	cout << "marks:- ";
	cin >> s.marks;
}
int main()
{
	student s1,s2,s3;
	temp(s1);
	temp (s2);
	temp(s3);
	s1.getdetails();
	cout << "\n";
	s2.getdetails();
	cout << "\n";
	s3.getdetails();
	cout << "\n";
	
	return 0;
}
