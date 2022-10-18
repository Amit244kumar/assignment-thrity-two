#include<iostream>
#include<conio.h>

using namespace std;

class FLOAT
{
   private:
      float data;
   public:
       FLOAT(float f):data(f)
       {

       }
       FLOAT(){}
       void operator=(float f)
       {
           data=f;

       }
       void operator=(FLOAT f)
       {
           data=f.data;
       }
       float operator+(FLOAT f)
       {
           return data+f.data;
       }
       float operator-(FLOAT f)
       {
           return data-f.data;
       }
       float operator*(FLOAT g)
       {
           return data*g.data;
       }
       float operator/(FLOAT c)
       {
           return data/c.data;
       }
       friend ostream& operator<<(ostream &out,FLOAT &f)
       {
           out<<f.data;
           return out;
       }

};

int main()
{
    FLOAT f1=3.0,f2;
    f2=4.1;
    cout<<"First float object "<<f1<<" second object "<<f2<<endl;
    cout<<"addition of two float numbers"<<endl;
    cout<<f1+f2<<endl;
    cout<<"multiplication of float numbers"<<endl;
    cout<<f1*f2<<endl;
    cout<<"difference of float numbers"<<endl;
    cout<<f1-f2<<endl;
    cout<<"division of float numbers"<<endl;
    cout<<f1/f2<<endl;

    getch();
    return 0;
}
