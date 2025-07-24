#include<iostream>
using namespace std;
bool is_In_fibonaci(int n)
{
    int i,a=-1,b=1,c=0;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(n==c)
          return true;
        a=b;
        b=c;
        return false;  
    } 
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<is_In_fibonaci(n);
}