#include<iostream>
#include<conio.h>

using namespace std;

class Addition
{
    public:
        int add(int a,int b)
        {

            return a+b;
        }
        float add(float a,float b)
        {
            return a+b;
        }
        double add(double a,double b)
        {
            return a+b;
        }
};

int main()
{
    Addition a1;
    cout<<"The addition of integers "<<endl;
    cout<<a1.add(23,54)<<endl;
    cout<<"The addition of float "<<endl;
    cout<<a1.add(21.43,25.54)<<endl;
    cout<<"The addition of double"<<endl;
    cout<<a1.add(52.85646,61.85747)<<endl;
    getch();
    return 0;
}
