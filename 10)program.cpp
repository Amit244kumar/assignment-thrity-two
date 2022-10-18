#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Player
{
  private:
     int player_no;
     char name[10];
     int matches,*goals=NULL;
  public:
    Player(int pno,char *n)
    {
        player_no=pno;
        strcpy(name,n);

    }
    void setMatchs(int m)
    {
        matches=m;
        goals=new int[m];
        for(int i=0;i<m;i++)
        {
            cout<<"Enter number of goals in "<<i+1<<" match"<<endl;
            cin>>*(goals+i);
        }
    }
    void display()
    {
        cout<<"player details "<<endl<<endl;
        cout<<"player no     :"<<player_no<<endl;
        cout<<"player name   :"<<name<<endl;
        cout<<"payer matches :"<<matches<<endl;
        for(int i=0;i<matches;i++)
        {
            cout<<"   In "<<i+1<<" matches number of goal is "<<*(goals+i)<<endl;
        }
    }
    ~Player()
    {
        delete goals;
    }
};

int main()
{
    int m;
    Player p1(2,"amit");
    cout<<"Enter number of matches played"<<endl;
    cin>>m;
    p1.setMatchs(m);
    p1.display();
    getch();
    return 0;
}
