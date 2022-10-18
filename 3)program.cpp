#include<iostream>
#include<conio.h>

using namespace std;
class Animals
{
public:
    void sound()
    {

    }
};

class Dogs:public Animals
{
public:
    void sound()
    {
        cout<<"bhow"<<endl;
    }
};

int main()
{
    Animals *a;
    Dogs d1;
    d1.sound();
    getch();
    return 0;
}
