// call by object and return object.
#include<iostream>
using namespace std;
class Complex{
     private:
        int a,b;
     public:
         void setData(int,int);
         void showData();
         Complex add(Complex C);
         Complex multiply(Complex C);
        
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
Complex Complex::add(Complex C)
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::multiply(Complex C)
{
    Complex temp;
    temp.a=a*C.a-b*C.b;
    temp.b=b*C.a+a*C.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(4,5);
    c2.setData(2,3);
    c3=c1.add(c2);
    c3.showData();
    c4=c1.multiply(c2);
    c4.showData();

}