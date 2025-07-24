// Define a class Time with hr,min,sec as instance member variables.Define constructor to initialize time object.
#include<iostream>
using namespace std;
class Time
{
    private:
      int hr,min,sec;
    public:
       Time(int h,int m,int s): hr(h),min(m),sec(s)  
       { }      
};

