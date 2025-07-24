/* Define a class Time with appropriate instance variables and member functions.
   Overload following operators.
   1. << insertion operator
   2. >>extraction operator
*/
#include<iostream>
using namespace std;
class Time
{
    private:
       int hr,min,sec;
    public:
       void setTime(int x,int y,int z)
       {
          hr=x;
          min=y;
          sec=z;
       }   
       void showTime()
       {
          cout<<hr<<":"<<min<<":"<<sec<<endl;
       }
       void normalize()
       {
          hr=hr+min/60;
          min=min%60;
          min=min+sec/60;
          sec=sec%60;
       }
       friend istream& operator>>(istream &,Time &);
       friend ostream& operator<<(ostream &,Time);
};
istream& operator>>(istream &din,Time &t)
{
    din>>t.hr>>t.min>>t.sec;
}  
ostream& operator<<(ostream &dout,Time t)
{
    dout<<"hr="<<t.hr<<" min="<<t.min<<" sec="<<t.sec;
}
int main()
{
    Time t1,t2,t3;
    cout<<"Enter Time = ";
    cin>>t1;
    t1.normalize();
    cout<<t1;
}