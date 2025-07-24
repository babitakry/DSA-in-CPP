//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
#include<stdio.h>
using namespace std;
void Fibonaci_num(int n);
int main()
{
    int num;
    cout<<"Enter a number to check is this is term of fibonacii series or not:";
    cin>>num;
    Fibonaci_num(num);
    return 0;
}
void Fibonaci_num(int n)
{
    int i,a=-1,b=1,c;
    for(i=1;i<=23;i++)
    {
        c=a+b;
        a=b;
        b=c;
        //cout<<c<<" ";
        if(c==n)
          break;
        
    }
    if(c==n)
      cout<<"yes";
    else
      cout<<"No";
}