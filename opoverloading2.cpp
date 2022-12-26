//operator overloading concept that returns object of type complex
#include<iostream>
using namespace std;
 class complex{
         private:
         int real;
         int img;
         public:
         complex(){
            real=0;
            img=0;
         }
         complex(int r,int i){
            real=r;
            img=i;
         }
         complex operator -(){
            complex temp;
            temp.real=-real;
            temp.img=-img;
            return temp;
         }
         void display(){
            cout<<"Real part: "<<real<<endl;
            cout<<"Imaginary part: "<<img<<endl; 
         }
 };
 int main(){
    complex c(5,7),t;
    cout<<"Before overloading: "<<endl;
    c.display();
    t=-c;
    cout<<"After overloading: "<<endl;
    t.display();
 }