#include<iostream>
using namespace std;
int main()
{ 
    string str;
    int flag = 0;
    int a;
    cout  << "Enter a string\n" << endl;
    getline(cin,str);
        a = str.length();
         if(a%2 == 0)
                    { 
                         a = a/2;
                         }
             else
             {          
                    a= a/2+1;
                }
                    for(int i=0;i<a;i++)
                    {
                          if(str[i] == str[(str.length()-1)-i])
                          {
                                  flag = 0;
                                  }
                                  else
                                  {
                                      flag = 1;
                                      break;
                                 }
                                 }
                   if(flag == 0)
                   {
                     cout << "It is palindrome\n" << endl;
                     }
                     else
                     {
                          cout << " not palindrome\n" << endl;
                          }
return 0;
}
                                      
                    
                         
             
