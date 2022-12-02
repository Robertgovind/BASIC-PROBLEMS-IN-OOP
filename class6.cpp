//illustration of pointer and object
#include<iostream>
#include<conio.h>
using namespace std;
class marks
{
           private:
                   float *ptr;
                   int num;
                   char name[20];
           public:
                   void noSubject()
                   {
                                   cout<<"Enter the no of subject:";
                                   cin>>num;
                                   }        
                    void readdata();
                    void displaydata();      
           
      };
      void marks::readdata()
      {
                            cout<<"Enter the student name:";
                            cin>>name;
                            ptr=new float[num];
                            for(int i=0;i<num;i++)
                            cin>>*(ptr+i);
                            
                            }
      void marks::displaydata()
      {
                               float sum=0,per;
                               for(int j=0;j<num;j++)
                               sum=sum+*(ptr+j);
                               per=sum/num;
                               cout<<endl<<"Your data is :"<<endl<<"Name"<<name;
                               cout<<"The percentage is :"<<per;
                               delete [] ptr;
                               
                               }
      int main ()
      {
               marks m;
               m.noSubject();
               m.readdata();
               m.displaydata();
               getch();
               return 0;
               }
