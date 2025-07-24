#include<iostream>
using namespace std;
void f1()
{
    cout<<"Hello MysirG";
}
void f2()
{
 cout<<"Hello"<<endl<<"MysirG";
}
void f3()
{
    int a,b,c;
    cout<<"Enter two numbers";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c;
}
void f4()
{
    int r;
    float area;
    cout<<"Enter radius of circle";
    cin>>r;
    area=3.14*r*r;
    cout<<"Area of a circle is "<<area;
}
void f5()
{
    int l,b,h,vol;
    cout<<"Enter length,breadth and height of a cuboid";
    cin>>l>>b>>h;
    vol=l*b*h;
    cout<<"Volume is "<<vol;
}
void f6()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average is "<<avg;
}
void f7()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    cout<<"Square of "<<x<<" is "<<x*x;
}
void f8()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    b=a+b-(a=b);
    cout<<"After Swapping"<<endl<<"a="<<a<<" b="<<b;
}
void f9()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    if(a>b)
      cout<<" maximum is "<<a;
    else
      cout<<" maximum is "<<b;  
}
void f10()
{
    int i,a[]={3,5,1,8,10,9,7,4,2,6};
    int sum=0;
    for(i=0;i<=9;i++)
       sum=sum+a[i];
    cout<<"Sum is "<<sum;   
}

int main()
{
    f10();
    return 0;
}
