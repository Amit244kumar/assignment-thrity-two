#include<conio.h>
#include<iostream>

using namespace std;
class Area
{
protected:
    int area;

};
class Rectangle:protected Area
{
    public:
        Rectangle(int a,int b)
        {
            area=a*b;
        }
        int getArea()
       {
           return area;
       }
};
class Triangle:protected Area
{
    public:
        Triangle(int a,int b)
        {
            area=a*b/2;
        }
        int getArea()
       {
          return area;
       }
};

class Circle:protected Area
{
public:
    Circle(int r)
    {
        area=2.14*r*r;
    }
    int getArea()
    {
        return area;
    }
};
int menu()
{
    int choice;
    cout<<"1.Calculate rectangle area"<<endl;
    cout<<"2.Calculate triangle area"<<endl;
    cout<<"3.Calculate circle area"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    return choice;
}


int main()
{
    int a,b;
       switch(menu())
       {
           case 1:{
               cout<<"Enter length and breadth"<<endl;
               cin>>a>>b;
               Rectangle R1(a,b);
               cout<<"The area of rectangle is "<<R1.getArea();
               break;
           }
           case 2:{
               cout<<"Enter height and base"<<endl;
               cin>>a>>b;
               Triangle R2(a,b);
               cout<<"The area of triangle is "<<R2.getArea();
               break;
           }
           case 3:{
               cout<<"Enter radius of circle"<<endl;
               cin>>a;
               Circle R3(a);
               cout<<"The area of circle is "<<R3.getArea();
               break;
           }
           default:
            cout<<"Invalid choice";
       }
   getch();
   return 1;
}
