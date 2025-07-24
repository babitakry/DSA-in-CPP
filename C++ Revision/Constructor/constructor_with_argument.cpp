#include<iostream>
using namespace std;

class Complex
{
    private:
       int a,b;
    public: 
       Complex (int x,int y) //constructor
       {
          a=x;
          b=y;
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
    Complex c1(0,0),c2(0,0),c3(0,0); //argument passing in object;
    c1.setData(2,3);
    c2.setData(4,5);
    c3=c1.add(c2);
    c3.showData();
}