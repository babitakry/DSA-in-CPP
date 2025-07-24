
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
bool isPrime(int x);
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    cout<<isPrime(x);
}
bool isPrime(int x)
{
    int i;
    for(i=2;i<=x;i++)
      if(x%i==0)
        break;
    if(x==i)
      return true;    
    else
      return false;  
}