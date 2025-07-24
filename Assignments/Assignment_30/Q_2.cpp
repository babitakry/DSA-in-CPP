
#include<iostream>
#include<stdio.h>
using namespace std;
int highestValueDigit(int n);
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Highest Value = "<<highestValueDigit(n);

}
int highestValueDigit(int n)
{
    int y,digit,max_digit=0;
    y=n;
    while(n)
    {
        digit=n%10;
        n=n/10;
        if(max_digit<digit)
          max_digit=digit;
    }
    return max_digit;

}