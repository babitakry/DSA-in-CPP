#include<iostream>
using namespace std;
class Complex
{
    private:
       int a,b;
    public:
       void setData(int,int);
       void showData();
       Complex operator+(Complex C);
       Complex operator-(Complex C);
       Complex operator-();   
};
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}
Complex Complex::operator+(Complex C) //using operator overloading
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::operator-(Complex C)  //using operator overloading
{
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
Complex Complex::operator-()     //using operator overloading
{
    Complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
}
int main()
{
   Complex c1,c2,c3;
   c1.setData(3,4);
   c2.setData(5,6);
   c3=c1+c2;  // c3=c1.operator+(c2);
   c3.showData();
   cout<<endl;
   c3=c1-c2;  // c3=c1.operator-(c2);
   c3.showData();
   cout<<endl;
   c3=-c1;  // c1 is caller object which call the - operator without passing any argument and whateven value is returned by this assign in c3;
   c1.showData();
   c3.showData();
}