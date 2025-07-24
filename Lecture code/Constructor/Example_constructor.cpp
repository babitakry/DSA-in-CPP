#include<iostream>
#include<stdlib.h>
using namespace std;
class Complex
{
   private:
      int a,b,*p,addp;
   public:
      Complex(int x,int y)
      {
          a=x;
          p=(int*)malloc(4);
          *p=y;
          cout<<"a="<<a<<"\n"<<"p="<<p<<"\n"<<"*p="<<*p<<"\n";
      }
      void updateData(int,int);
      void setData(int,int);
      void showData();
      Complex add(Complex);   
};
void Complex::updateData(int x,int y)
{
     a=x;
    *p=y;
    cout<<" a="<<a<<" "<<"p="<<*p<<" "<<"addp="<<p<<endl;
}
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"\n a="<<a<<" "<<"b="<<b<<endl;
}
Complex Complex::add(Complex C)
{
    Complex temp(0,0);
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
int main()
{
    Complex c1(1,2),c2(3,4),c3(0,0),c4(0,0);
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1.add(c2);
    c3.showData();
    c4.updateData(15,7);
    
}