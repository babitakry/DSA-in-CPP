/* Define a C++ class fraction
   class fraction
   {
      long numerator;
      long denominator;
      public:
        fraction(long n=0,long d=0);
   };
     Define an operator + to add two fraction object.
   */
#include<iostream>
using namespace std;
class Fraction
{
    private:
      long numerator,denominator;
    protected:
      long lcm(int x,int y)
      {
        int L;
        for(L=x>y ? x:y ;L<=x*y;L++)
           if(L%x==0 && L%y==0)
             return L;
      }
    public:
     Fraction(long n=0,long d=0) //constructor 
      {
        numerator=n;
        denominator=d;
      }

      void setData(long x,long y)
      {
          numerator=x;
          denominator=y;
      }
      void showData()
      {
        cout<<"numerator = "<<numerator<<" denominator ="<<denominator<<endl;
      }
      
      Fraction operator+(Fraction f)
      {
         Fraction temp;
         long L=lcm(denominator,f.denominator);
         temp.numerator=(numerator*L)/denominator+(f.numerator*L)/f.denominator;
         temp.denominator=L;
         return temp;
      }
      
       
};
int main()
{
    Fraction f1,f2,f3,f4;
    f1.setData(1,3);
    f2.setData(3,4);
    f3=f1+f2;
    f3.showData();
}
