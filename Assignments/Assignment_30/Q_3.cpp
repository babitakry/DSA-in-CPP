
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double power(double x,double y);
int main()
{
    double x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<power(x,y);

}
double power(double x,double y)
{
    //if(y>0)
      return pow(x,y);
    /*else
      if(y<0)
        return 1/x*power(x,y+1);
      else 
        return 1;  */

}
