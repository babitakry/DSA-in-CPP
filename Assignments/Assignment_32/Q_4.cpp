#include<iostream>
using namespace std;
class Date{
    private:
      int d,m,y;
    public:
      void setDate(int a,int b,int c)
      {
        d=a;
        m=b;
        y=c;
      }
      void showDateFormate1()
      {
        cout<<"\n"<<d<<"-"<<m<<"-"<<y;
      } 
      void showDateFormate2()
      {
        char *months[]={ "Jan",
                         "Feb",
                         "Mar",
                         "Apr",
                         "May",
                         "Jun",
                         "Jul",
                         "Aug",
                         "Sep",
                         "Oct",
                         "Nov",
                         "Dec"
                         };
        cout<<"\n"<<d<<"-"<<months[m-3]<<"-"<<y;                 
      } 
};
int main()
{
    Date s1,s2;
    s1.setDate(15,6,2023);
    s1.showDateFormate1();
    s1.showDateFormate2();
}