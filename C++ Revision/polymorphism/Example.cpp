#include<iostream>
using namespace std;
void f1(float x)
{
    x++;
}
void f1(double y)
{
    --y;
}
int main()
{
   char x='A',y;
   //y=f1(x);
   cout<<y;
   return 0;
}