#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum of two numbers = "<<add(a,b)<<endl;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"Sum of three numbers = "<<add(a,b,c);

    return 0;
}
