#include<iostream>

int add(int a,int b,int c=0);
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum of two numbers = "<<add(a,b)<<endl;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"Sum of three numbers = "<<add(a,b,c);

}


int add(int a,int b,int c)
{
    return a+b+c;
}