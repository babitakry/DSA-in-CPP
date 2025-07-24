#include<iostream>
using namespace std;
namespace n1
{
    int a=5;
}
namespace n2
{
    int a=6;
}
int main()
{
    cout<<n1::a<<"\t";
    cout<<n2::a;
}