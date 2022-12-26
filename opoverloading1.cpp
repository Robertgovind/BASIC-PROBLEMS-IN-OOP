//to overload a unary minus operator(-)
#include<iostream>
using namespace std;
class complex{
    private:
     int real;
     int img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int r, int i){
        real=r;
        img=i;
    }
    void operator -()
    {
        real=-real;
        img=-img;
    }
    void display(){
        cout<<"Real part: "<<real<<endl;
        cout<<"Imaginary part: "<<img<<endl;
    }

};
int main()
{
        complex c(7,5);
        cout<<"Before overloading:"<<endl;
        c.display();
        cout<<"After overloading:"<<endl;
        -c;
        c.display();
    return 0;
}