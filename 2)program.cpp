#include<iostream>
#include<conio.h>

using namespace std;

class Rectangle
{
    public:
        int area(int a,int b)
        {

            return a*b;
        }
        float area(float a,float b)
        {
            return a*b;
        }
        double area(double a,double b)
        {
            return a*b;
        }
};

int main()
{
    Rectangle A;
    cout<<"The rectangle area of integer"<<endl;
    cout<<A.area(4,5)<<endl;
    cout<<"The rectangle area of float"<<endl;
    cout<<A.area(5.3,8.5)<<endl;
    cout<<"The rectangle area on double"<<endl;
    cout<<A.area(22.354646,32.277655)<<endl;
    getch();
    return 0;
}
