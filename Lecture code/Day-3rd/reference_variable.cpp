#include<iostream>
using namespace std;
int main()
{
    int x=5; //ordinary variable
    int *p;// pointer variable
    p=&x; 
    int &y=x; // Reference variable
    y++;
    cout<<x<<" "<<p<<" "<<y<<" ";
return 0;
}    