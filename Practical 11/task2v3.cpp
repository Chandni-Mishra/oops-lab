#include<iostream>
using namespace std;
class a{
  public:
  int x;
  protected:
  int y;
  private:
  int z;
  };
 class b : protected a{
   public :
   void display()
     {
     x=10;
     y=20;
     //z=30 error due to privte member variable
     cout << x << " " << y << endl;
     }
 };
 int main()
 {
b obj;
 // obj.x = 10;//error due to  class a is inherited in protected mode
 //obj.y = 20;//error due to class a inherited in private mode
 // obj.z = 30//error due to z is private in its class
 obj.display();
 return 0;
 }
