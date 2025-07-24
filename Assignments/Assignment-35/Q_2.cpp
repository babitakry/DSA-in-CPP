// Create a class Time which contains hour,min and seconds as fields.Overload greater than ( > ) operator to compare two time objects.
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
int main()
{
     Time t1,t2,t3;
     int h1,m1,s1,h2,m2,s2;
     cout<<"Enter Time_1 = ";
     cin>>h1>>m1>>s1;
     cout<<endl;
     cout<<"Enter Time_2 = ";
     cin>>h2>>m2>>s2;
     cout<<endl;
     t1.setTime(h1,m1,s1);
     t1.normalize();
     t2.setTime(h2,m2,s2);
     t2.normalize();
     if(t1>t2)
     {
        t1.showTime();
        cout<<"greater than ";
        t2.showTime();
     }
    else
    {
        t2.showTime();
        cout<<"greater than ";
        t1.showTime();
    }
      


}