#include<iostream>
#include<conio.h>

using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Class A default constructor"<<endl;
    }
};

class B:public A
{
    public:
    B():A()
    {
        cout<<"Class B default constructor"<<endl;
    }
};
class C:public B
{
    public:
    C():B()
    {
        cout<<"Class C default constructor"<<endl;
    }
};
int main()
{
    C c1;
    getch();
    return 0;
}
