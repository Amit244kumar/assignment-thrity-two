#include<iostream>
#include<conio.h>
using namespace std;

class A
{
   public:
       A()
       {
           cout<<"Class A Default constructor called"<<endl;
       }
       A(int a)
       {
           cout<<"Class A parameterized constructor called"<<endl;
       }

};
class B:public A
{
   public:
    B():A()
    {
        cout<<"Class b default constructor called"<<endl;
    }
    B(int a,int b):A(b)
    {
        cout<<"Class b parameterized constructor called"<<endl;
    }

};

int main()
{
    A a1;
    B b1;
    B b2,b3(2,3);
    getch();
    return 1;


}
