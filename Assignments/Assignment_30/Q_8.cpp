// Define overloaded functions to calculate area of circle,area of rectangle and area of triangle.
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
float  area(int );
int area(int ,int );
float area(int ,int ,int);
int main()
{
    int r;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"Area of Circle="<<area(r)<<endl<<endl;

    int len,bre;
    cout<<"Enter length and breath:";
    cin>>len>>bre;
    cout<<"Area of Rectangle="<<area(len,bre)<<endl<<endl;

    int a,b,c;
    cout<<"Enter side of triangles:";
    cin>>a>>b>>c;
    cout<<"Area of Triangle="<<area(a,b,c);

    return 0;
}
float  area(int r)
{
    return (3.14*r*r);
}
int area(int length,int breath)
{
    return (length*breath);
}
float area(int a,int b,int c)
{
    int s;
    float A;
    s=(a+b+c)/2.0;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    return A;
}