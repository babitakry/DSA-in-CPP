#include<iostream>
using namespace std;

class Complex
{
    private:
       int a,b;
    public: 
       Complex ()
       {
         a=0;
         b=0;
         cout<<"\n"<<"a="<<a<<" b="<<b;
       }
       Complex(int x)
       {
         a=x;
         b=0;
         cout<<"\n"<<"a="<<a<<" b="<<b;
       }
       Complex (int x,int y) //constructor
       {
          a=x;
          b=y;
          cout<<"\n"<<"a="<<a<<" b="<<b;
       }
       Complex(Complex &C) //copy constructor definition
       {
           a=C.a;
           b=C.b;
       }
       ~Complex() //Destructor
       {

       }
       void setData(int,int);
       void showData();
       Complex add(Complex);  
};
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"\n"<<"a="<<a<<" b="<<b;
}
Complex Complex::add(Complex C)
{
    Complex temp(0,0); //argument passing in object;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
int main()
{
    Complex c1(1,2),c2(3),c3; //argument passing in object;
    Complex c4=c1; //copy constructor
    c4=c2; // not copy constructor || simply assignment operator is function.
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1.add(c2);
    c3.showData();
    cout<<endl;
    
}