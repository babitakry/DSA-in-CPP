/* Define a class Time to represent a time with instance variables h,m and s to store hour,minute and second .Also define followinf member functions.
   1. void setTime(int,int,int)
   2. void showTime()
   3. void normalize()
   4. Time add(Time)
   5. bool is_greater(Time)*/
#include<iostream>
using namespace std;
class Time
{
    private:
       int h,m,s;
    public:
       void setTime(int hr,int min,int sec)
       {
         h=hr;
         m=min;
         s=sec;
       }   
       void showTime()
       {
          cout<<h<<":"<<m<<":"<<s;
          cout<<endl;
       }
       void normalize()
       {
          m=m+s/60;
          s=s%60;
          h=h+m/60;
          m=m%60;
       }
       Time add(Time t)
       {
          Time temp;
          temp.h=h+t.h;
          temp.m=m+t.m;
          temp.s=s+t.s;
          return temp;
       }
       bool is_greater(Time t)
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
        else 
            return false;            

       }
          
};   
int main()
{
    int hr,min,sec;
    cout<<"Enter time in hour ,min ,sec :",
    cin>>hr>>min>>sec;
    int H,M,S;
    cout<<"Enter time in hour ,min ,sec :",
    cin>>H>>M>>S;
    Time T1,T2,T3,T4;
    T1.setTime(hr,min,sec);
    T1.normalize();
    cout<<"After normalization = ";
    T1.showTime();
    T2.setTime(H,M,S);
    T2.normalize();
    cout<<"After normalization = ";
    
    T2.showTime();
    T3=T1.add(T2);
    cout<<"Addition of two times = ";
    T3.normalize();
    T3.showTime();
     
    cout<<endl;

    if(T1.is_greater(T2)==true)
    {
      T1.showTime();
      cout<<"is Greater ";
    }
    else
    {
        T1.showTime();
        cout<<"is Smaller ";
    }



}