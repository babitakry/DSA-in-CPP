/* Define a class Complex and overload following operator as a friend.
 1. +
 2. - 
 3. *
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int ,int);
        void showData();
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);

};
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"\n a="<<a<<" b="<<b<<endl;
}
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a-Y.a;
    temp.b=X.b-Y.b;
    return temp;
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a-X.b*Y.b;
    temp.b=X.b*Y.a+X.a*Y.b;
    return temp;
}

int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(1,2);
    c2.setData(3,4);
    cout<<"Addition :";
    c3=c1+c2; //c3=operator+(c1,c2);
    c3.showData();
    cout<<"Substraction :";
    c4=c1-c2; //c4=operator-(c1,c2);
    c4.showData();
    cout<<"Multiplication :";
    c5=c1*c2; //c5=operator*(c1,c2);
    c5.showData();

}
