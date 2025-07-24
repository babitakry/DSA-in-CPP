//Write a function to swap data of two int variables using call by reference;
#include<iostream>
#include<stdio.h>
void swap(int &m,int &n);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Before Swapping "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping "<<a<<" "<<b;
    return 0;
}
void swap(int &m,int &n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
}