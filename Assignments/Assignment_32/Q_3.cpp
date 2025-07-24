//Define a class Date to represent date(like d=31,m=12,y=2022) .Declare appropriate number of instance member variables and also define instance member functions to set date and get date.
#include<iostream>
using namespace std;
class Date
{
   private: 
      int d,m,y;
   public:
      void setDate(int date,int mon,int year)
      {
        d=date;
        m=mon;
        y=year;
      }  
      void getDate()
      {
        cout<<"\n"<<d<<"/"<<m<<"/"<<y;
      } 
};
int main()
{
    Date d1;
    d1.setDate(15,06,2023);
    d1.getDate();
}