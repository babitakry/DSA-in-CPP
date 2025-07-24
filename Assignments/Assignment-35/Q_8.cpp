// In Question-6,define < to compare two fraction objects.
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
        cout<<"numerator = "<<numerator<<" denominator = "<<denominator<<endl;
      }
      
      Fraction operator+(Fraction f)
      {
         Fraction temp;
         long L=lcm(denominator,f.denominator);
         temp.numerator=(numerator*L)/denominator+(f.numerator*L)/f.denominator;
         temp.denominator=L;
         return temp;
      }
      bool operator<(Fraction f)
      {
         
        if((numerator*f.denominator)/denominator < (f.numerator*denominator)/f.denominator)
            return true;
        else 
            return false;    
      }
      
       
};
int main()
{
    Fraction f1,f2,f3,f4;
    f1.setData(1,3);
    f2.setData(3,4);
    f3=f1+f2;
    f3.showData();
    if(f1<f2)
       cout<<"True";
    else 
       cout<<"False";   
}
