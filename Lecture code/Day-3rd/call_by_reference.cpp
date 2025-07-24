#include<iostream>
inline int f3(int &m,int &n);
using namespace std;
int main()
{
    int a=5,b=6,sum;
    sum=f3(a,b);
    cout<<"Square and adding of "<<a<<" & "<<b<<" is "<<sum<<endl;

    return 0;
}
int f3(int &m,int &n)
{
   return (m*m+n*n);

}

