#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
               private:
                       float len,br;
               public:
                       void getdata();
                       void getarea();
                     }
int main()
{
          rectangle r1,r2;
          r1.getdata();
          r2.getdata();
          r1.getarea();
          r2.getarea();
          getch();
          return 0;
    }
void rectangle::getdata()
{
                         cout<<endl<<"Enter the length and breadth:";
                         cin>>len>>br;
                         }
void rectangle::getarea()
{
                         cout<<"\nThe area is "<<(len * br);
                         }

