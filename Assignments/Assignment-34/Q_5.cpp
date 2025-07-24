// Define a class Complex with instance variables for real and imaginary part of a complex number.Define only one parameterised constructor in the class to initialise complex object.Also define showData method in the class with size 5 and display values of each object.
#include<iostream>
using namespace std;
class Complex
{
    private:
      int a,b;
    public:
      Complex(int x,int y):a(x),b(y)
      {}
      void showData()
      {
        cout<<"\na="<<a<<" b="<<b;
      }
      
};
void example()
      {
        Complex c[5]={Complex(4,6),Complex(10,20),Complex(5,2),Complex(19,21),Complex(19,15)};
        for(int i=0;i<5;i++)
           c[i].showData();
      }
int main()
{
  Complex c1(0,0),c2(0,0),c3(0,0),c4(0,0),c5(0,0);
  
  example();
  
  // c1.showData();
  // c2.showData();
  // c3.showData();
  // c4.showData();
  // c5.showData();

  return 0;
}      