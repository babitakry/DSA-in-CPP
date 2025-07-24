#include<iostream>
int add(int a,int b,int c);
int add(int a,int b);
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter three numbers\t";
    cin>>x>>y>>z;
    cout<<"Sum of three numbers is "<<add(x,y,z)<<endl;
    cout<<"Enter two numbers\t";
    cin>>x>>y;
    cout<<"Sum of two numbers is "<<add(x,y); 
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int add(int a,int b)
{
    return a+b;
}