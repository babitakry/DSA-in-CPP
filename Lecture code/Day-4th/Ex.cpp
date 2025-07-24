// Define a class to represent a complex number. Store real and imaginary part. Also define methods to set values of real and imaginary part of a complex number. Define one more method to display complex numbers.
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;//instance member Variable

    public:
    void setData(int x,int y)//instance member function
    {
        a=x;
        b=y;
    }
    void showData();

};
void Complex::showData()
    {
        cout<<"\na="<<a<<" "<<"b="<<b;
    }
int main()
{
    Complex c1,c2;
    c1.setData(55,19);
    c1.showData();
}