#include<iostream>
using namespace std;
// class A
// {
//    private: 
//     const int k;
//    public:
//    // A(){ k=10 ;} /*show error*/
//       A():k(10)  //correct;
//       {} 
// };

class Complex
{
    private:
       int a,b;
       const int k;
    public:
       Complex():a(0),b(0),k(1)
       {}
       Complex(int x):a(x),b(0),k(2)
       {}
       Complex(int a,int b,int k):a(a),b(b),k(k)
       {}
       Complex(Complex &C):k(2) //copy constructor
       {
        a=C.a;
        b=C.b;
       }   
       ~Complex(){}  //Destructor
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
    Complex temp(0,0,0);
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
int main()
{
    Complex c1(1,2,10),c2(3),c3;
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}