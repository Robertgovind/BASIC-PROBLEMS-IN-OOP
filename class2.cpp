#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
             private: 
                     float real;
                     float imag;
             public:
                     complex()
                     {
                              real = 0;
                              imag = 0;
                      }        
             complex(float r, float i)
             {
                           real= r;
                           imag= i;
                           
                           }
             complex(complex &c)
                       {
                               real = c.real;
                               imag = c.imag;
                                    
                                }
             
             void display()
                      {
                              cout<<real<<"+i"<<imag;      
                                    }
             };
     int main()
             {
                       complex c1;
                       
                       complex c2(1.2,5);
                       complex c3(c2);
                       c1.display();
                       c2.display();
                       c3.display();
                       getch();
                       return 0;
                       }

