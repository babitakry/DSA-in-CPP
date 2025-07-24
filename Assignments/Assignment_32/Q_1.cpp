//Define a class Complex to represent a complex number .Declare instance member variables to store real and imaginary part of a complex number,also define instance member functions to set values of complex number and print values of complex number.
#include<iostream>
using namespace std;
class Complex
{
    private:
      int real,imag;
    public:
      void setComplex(int x,int y)
      {
        real=x;
        imag=y;
      } 
      void showComplex()
      {
        cout<<"\nreal="<<real<<" imaginary="<<imag;
      } 
};
int main()
{
    Complex c1;
    c1.setComplex(4,5);
    c1.showComplex();
}