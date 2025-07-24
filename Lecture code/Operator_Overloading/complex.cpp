#include<iostream>
using namespace std;
class Complex
{
    private:
       int a,b;  // instance variable // fields
    public:
    Complex(){a=0;b=0;}
    Complex(int x){a=x;b=0;}
    Complex(int x,int y){a=x;b=y;}
    Complex(Complex &C)
    {
        a=C.a;
        b=C.b;
    }
    ~Complex(){}  //Destructor
    void setData(int,int);
    void showData();
    Complex operator+(Complex C);   
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
Complex Complex::operator+(Complex C)
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
int main()
{
    Complex c1(1,2),c2(3),c3;
    Complex c4=c1;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;//c3=c1.operator+(c2);  //c1 caller object hai usne apne add method ko call kiya or c2 as an argument usme pass kiya jo v return hoga wo c3 object me assign hoga !!
    c3.showData();
    return 0;
}
               