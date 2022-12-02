 #include<iostream>
#include<conio.h>
using namespace std;
class student 
{
              private:
                      int mark;
                      char name[20];
                      char address[20];
              public:
                      void getdata()
                      {
                                     cout<<"Enter the details: ";
                                     cin>>name>>mark>>address;
                                     }              
              
                      void display()
                      {
                                     cout<<name<<mark<<address;
                                     }
              };
              
int main()
{
          student s,p;
          s.getdata();
          s.display();
          p.getdata();
          p.display();
          getch();
          return 0;
          }              

