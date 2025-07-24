// Define a class Complex with appropriate instance variables and member functions. Define following operators in the class: 
//1. + 
//2. - 
//3. * 
//4. ==
#include<iostream>
using namespace std;
class Complex
{
   private:
       int a,b;
   public:
       void setData(int,int);
       void showData();
       Complex operator+(Complex);
       Complex operator-(Complex);
       Complex operator*(Complex);
       bool operator==(Complex);

};
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
Complex Complex::operator+(Complex C)
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::operator-(Complex C)
{
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
Complex Complex::operator*(Complex C)
{
    Complex temp;
    temp.a=a*C.a-b*C.b;
    temp.b=b*C.a+a*C.b;
    return temp; 
}
bool Complex::operator==(Complex C)
{
    if(a==C.a && b==C.b)
       return true;
    else 
       return false;   
}

int main()
{
    Complex c1,c2,c3;
    int a1,b1,a2,b2;
    cout<<"Enter real and imaginary part of 1st Complex number ="<<endl;
    cin>>a1>>b1;
    cout<<"Enter real and imaginary part of 2nd Complex number ="<<endl;
    cin>>a2>>b2;
    c1.setData(a1,b1);
    c2.setData(a2,b2);
    c3=c1+c2;
    cout<<"Sum of Complex number :";
    c3.showData();
    c3=c1-c2;
    cout<<"Difference of Complex number :";
    c3.showData();
    c3=c1*c2;
    cout<<"Multiplication of Complex number :";
    c3.showData();
    if(c1==c2)
      cout<<"true";
    else 
      cout<<"false";  
}

