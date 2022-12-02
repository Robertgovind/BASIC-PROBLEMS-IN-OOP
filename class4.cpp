#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
               private:
                       float len,br;
               public:
                       void getdata()
                       {
                                     cout<<"Enter the length and breadth: ";
                                     cin>>len>>br;
                                     
                                     }
                       void getarea()
                       {
                                     cout<<"\nThe area is :"<<(len*br);
                                     
                                     }
               
               
               };
int main()
{
          
          rectangle r1;
          r1.getdata();
          r1.getarea();
          getch();
          return 0;
          
          }

