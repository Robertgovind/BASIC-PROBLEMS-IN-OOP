#include<iostream>
#include<conio.h>
using namespace std;
class box
{
         private:
                 float length,breadth,height;
         public:
                 void readdata();
                 float volume();
         
         };
         

int main()
{
         box b1;
         float v;
         b1.readdata();
         v=b1.volume();
         cout<<"The volume is :"<<v;
        getch();
         return 0;
          }
void box::readdata()
{
                    cout<<"Enter the length,breadth and height :";
                    cin>>length>>breadth>>height;
                    }
float box::volume()
{
                   return length*breadth*height;
                   }
