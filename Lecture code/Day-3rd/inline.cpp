#include<iostream>
using namespace std;
inline int square(int);
int main()
{
  int x,y;
  cout<<"Enter a number ";
  cin>>x;
  y=square(x);
  cout<<"Square of"<<x<< "is" <<y;
}
 
int square(int a)
{
    return a*a;
}