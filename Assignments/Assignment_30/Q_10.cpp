// Write functions using function overloading to add two numbers having different data types.
#include<iostream>
#include<stdio.h>
using namespace std;
int add(int a,int b);
float add(float a,float b);
int main()
{
    int p,q;
    float x,y;
    cout<<"Enter two numbers:";
    cin>>p>>q;
    cout<<"Sum is "<<add(p,q)<<endl<<endl;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Sum is "<<add(x,y);
} 
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}