#include<iostream>
using namespace std;
class Time
{
    private:
      int h,m,s;
    public:
      void setTime(int,int,int);
      void showTime();
      void normalize();
      Time add(Time);
      bool is_greater(Time);

};
void Time::setTime(int x,int y,int z)
{
    h=x;
    m=y;
    s=z;
}
void Time::showTime()
{
    cout<<"\n"<<h<<":"<<m<<":"<<s;
}
void Time::normalize()
{
    h=h+m/60;
    m=m%60;
    m=m+s/60;
    s=s%60;
}
Time Time::add(Time t)
{
    Time temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    return temp;
}
bool Time::is_greater(Time t)
{
    if(h>t.h)
      return true;
    else if(h<t.h)
      return false;
    else if(m>t.m)
      return true;
    else if(m<t.m)
      return false;
    else if(s>t.s)
      return true;
    else if(s<t.s)
      return false;
    else 
      return false;          

}

int main()
{
    Time t1,t2,t3;
    bool x;
    t1.setTime(6,89,67);
    t1.normalize();
    t1.showTime();
    t2.setTime(5,59,79);
    t2.normalize();
    t2.showTime();
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    x=t1.is_greater(t2);
    cout<<"\nx="<<x;



}