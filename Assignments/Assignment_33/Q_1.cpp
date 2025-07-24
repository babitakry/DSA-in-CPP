/* Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts.Also define following member functions 
   1.void setData(int,int)
   2.void showData()
   3.Complex add(Complex)
   4.Complex substract(Complex)
   5.Complex multiply(Complex)*/

#include<iostream>
using namespace std;
class Complex
{
    private:
       int a,b;
    public:
       
       void setData(int x,int y)
       {
          a=x;
          b=y;
       }   
       void showData()
       {
          cout<<"\na="<<a<<" "<<"b="<<b;
       }
       Complex add(Complex m)
       {
          Complex temp;
          temp.a=a+m.a;
          temp.b=b+m.b;
          return temp;
       }
       Complex subtract(Complex m)
       {
          Complex temp;
          temp.a=a-m.a;
          temp.b=b-m.b;
          return temp;
       }

       Complex multiply(Complex m)
       {
          Complex temp;
          temp.a=a*m.a-b*m.b;
          temp.b=m.a*b+a*m.b;
          return temp;
       }
};   
int main()
{
    int p,q,x,y;
    Complex C1,C2,C3,C4,C5;
    cout<<"Enter two numbers 1st complex number : ";
    cin>>p>>q; 
    cout<<"Enter two numbers 2nd complex number : ";
    cin>>x>>y; 

    C1.setData(p,q);
    C2.setData(x,y);
    C1.showData();
    C3=C1.add(C2);
    cout<<"Addition of complex number : ";
    C3.showData();
    cout<<endl;

    cout<<"Subtraction of complex number : ";
    C4=C1.subtract(C2);
    C4.showData();
    cout<<endl;

    cout<<"Multiplication of complex number : ";
    C5=C1.multiply(C2);
    C5.showData();
    cout<<endl;

}   