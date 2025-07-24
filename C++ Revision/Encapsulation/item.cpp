#include<iostream>
using namespace std;
class item
{
    public: 
       int a,b; // instance member variables
       static int k; //static member variables || class variables
};
int item::k;  //Definition of static member variable 
int main()
{
    // item i1,i2; //If object is present.
    // i1.a=5;
    // i1.k=10;
    // cout<<"a="<<i1.a<<" ";
    // cout<<"b="<<i1.b<<" ";
    item::k=10;  //If object is not present.
    cout<<"k="<<item::k;
}