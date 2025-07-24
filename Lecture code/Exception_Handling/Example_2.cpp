#include<iostream>
using namespace std;
void f2()
{
    int balance=5000,amt;
    cout<<"Enter amount to withdraw : ";
    cin>>amt;
    if(amt>balance)
       throw 1;
    balance=balance-amt;
    cout<<"New balance is : "<<balance; 
}
int main()
{
    f2();
    return 0;
}