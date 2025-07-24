#include<iostream>
using namespace std;
class Complex{
     private:
        double a,b;
     public:
         void setData(double,double);
         void showData();
         Complex operator+(Complex C); //binary operator
         Complex operator-(Complex C); //binary operator
         Complex operator*(Complex C); //binary operator
         Complex operator/(Complex C); //binary operator
         Complex operator-();    //unary operator    
        
};
void Complex::setData(double x,double y)
{
  a=x;
  b=y;
}   
void Complex::showData()
{
  cout<<"a="<<a<<" b="<<b<<endl;
}
Complex Complex::operator+(Complex C) //binary operator
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::operator-(Complex C) //binary operator
{
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
Complex Complex::operator*(Complex C) //binary operator 
{
    Complex temp;
    temp.a=a*C.a-b*C.b;
    temp.b=b*C.a+a*C.b;
    return temp;
}
Complex Complex::operator/(Complex C) //binary operator
{
    Complex temp;
    temp.a=(a*C.a-b*C.b)/(C.a*C.a-C.b*C.b);
    temp.b=(b*C.a+a*C.b)/(C.a*C.a-C.b*C.b);
    return temp;
}
Complex Complex::operator-()  //unary operator
{
   Complex temp;
   temp.a=-a;
   temp.b=-b;
   return temp;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(4,5);
    c2.setData(2,3);
    c3=c1+c2;//c3=c1.operator+(c2);
    c3.showData();
    c3=c1-c2;//c3=c1.operator-(c2);
    c3.showData();
    c3=c1*c2;//c3=c1.operator*(c2);
    c3.showData();
    c3=c1/c2;//c3=c1.operator/(c2);
    c3.showData();
    c3=-c1;//c1.operator-();
    c1.showData();
    c3.showData();
   
   
    return 0;
}