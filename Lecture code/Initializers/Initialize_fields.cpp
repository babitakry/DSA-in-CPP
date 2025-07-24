#include<iostream>
using namespace std;
class Complex
{
    private:
       int a,b;  // instance variable // fields
    public:
    Complex():a(0),b(0)
        { 
        //   a=0; 
        //   b=0; 
        //   cout<<"\na="<<a<<" "<<"b="<<b<<" ";
        }
       Complex(int x):a(x),b(0)
       { 
        //   a=x; 
        //   b=0; 
        //   cout<<"\na="<<a<<" "<<"b="<<b<<" ";
       }
       Complex(int x,int y):a(x),b(y)
       {
        //   a=x;
        //   b=y;
        //   cout<<"\na="<<a<<" "<<"b="<<b<<"  ";
       }
       void setData(int,int);
       void showData();
       Complex add(Complex C);   
};
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"\na="<<a<<" "<<"b="<<b;
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
    Complex c1(1,2),c2(3),c3;
    c1.showData();
    c2.showData();
    c3.showData();
    // Complex c4=c1;
    // c1.setData(3,4);
    // c2.setData(5,6);
    // c3=c1.add(c2);
    // c1.showData();
    // cout<<endl;
    // c2.showData();
    // cout<<endl;
    // c3.showData();
    // cout<<endl;
    // c4.showData();
    // cout<<endl;
    // Complex(55,66);
    return 0;
}
          