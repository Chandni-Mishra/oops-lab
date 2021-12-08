#include<iostream>
using namespace std;
class a{
  public :
  int k;
  };
  class b : virtual public a{
  public:
  void display1()
  {
    k  = 10;
    cout << "value of a in class b is : " << k << endl;
    }
  };
  class c : virtual public a{
  public:
  void display2()
  {
    k  = 20;
    cout << "vlaue of a in class c is : " << k << endl;
    }
  };
  class d : virtual public a,public b{
  public:
  void display3()
  {
    k  = 30;
    cout << "value of k in class d is :" << k << endl; // error if virtual not used
    }
  };
  int main()
  {
b obj1;
c obj2;
d obj3;
obj1.display1();
obj2.display2();
obj3.display3();
return 0;
}
