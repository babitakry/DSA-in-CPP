// In Question-2, overload pre-increment and post-increment operator to increment Time object value by one second.
#include<iostream>
using namespace std;
class Time
{
    private:
       int hour,min,sec;
    public:
       void setTime(int,int,int); 
       void showTime();
       void normalize();
       bool operator >(Time);
       Time operator++()//pre-increment
       {
           sec++;
           min=min+sec/60;
           hour=hour+min/60;
           min=min%60;
           return *this;
       }
       Time operator++(int) //post-increment
       {
        Time temp=*this;
        sec++;
        min=min+sec/60;
        sec=sec%60;
        hour=hour+min/60;
        min=min%60;
        return temp;
       }
       

};
void Time::setTime(int x,int y,int z)
{
     hour=x;
     min=y;
     sec=z;
}
void Time::showTime()
{
     cout<<hour<<":"<<min<<":"<<sec<<" ";
}
void Time::normalize()
{
    hour=hour+min/60;
    min=min%60;
    min=min+sec/60;
    sec=sec%60;
}
bool Time::operator >(Time t)
{
    if(hour>t.hour)
       return true;
    else if (hour<t.hour)
    {
        return false;
    }
    else if(min>t.min)
        return true;
    else if(min<t.min)
        return false;
    else if(sec>t.sec)
        return true;
    else 
        return false;            
}
