#include<conio.h>
#include<iostream>
using namespace std;

class A
{
    public:
      A()
      {
          cout<<"Class A default constructor called"<<endl;
      }
};
class B:public A
{
   public:
     B():A()
     {
         cout<<"Class B default constructor called"<<endl;
     }
};

int main()
{
    B b1;
    getch();
    return 0;
}
