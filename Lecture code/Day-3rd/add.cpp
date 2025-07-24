#include<iostream>
using namespace std;
inline int add(int x,int y,int z=0);
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"sum is "<<add(a,b)<<endl;
    int c;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c);
    return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}