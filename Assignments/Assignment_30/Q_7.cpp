//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
#include<stdio.h>
using namespace std;

int add(int x,int y,int z=0);
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b);
    int c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c);
    
    return 0;
}
int add(int x,int y,int z)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}