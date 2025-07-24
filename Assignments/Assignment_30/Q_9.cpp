// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    float p,q;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Maximum is "<<max(a,b)<<endl;
    cout<<"Enter two numbers:";
    cin>>p>>q;
    cout<<"Maximum is "<<max(p,q);
}
int max(int x,int y)
{
    int max;
    
    if(x>y)
     return x;
    else
     return y;
}
float max(float x,float y)
{
     int max;

     if(x>y)
       return x;
     else
       return y;  
}