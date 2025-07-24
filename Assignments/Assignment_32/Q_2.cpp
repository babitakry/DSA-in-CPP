//Define a class Time to represent Time (like 3hr 45min 29sec).Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
    private:
      int hr,min,sec;
    public:
      void setValues(int h,int m,int s)
      {
        hr=h;
        min=m;
        sec=s;
      }  
      void showValues()
      {
        cout<<"\n"<<hr<<"hr "<<min<<"min "<<sec<<"sec";
      }  
};
int main()
{
    Time t1;
    t1.setValues(5,6,30);
    t1.showValues();
}