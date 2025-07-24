/* 
Consider following class Numbers
   class Numbers
   {
     int x,y,z;
     public:
       // methods
   };
   overload the operator unary minus (-) to negate the numbers.
*/ 
#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
       void setData(int,int,int);
       void showData();
       Numbers operator-();
}; 
void Numbers::setData(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
} 
void Numbers::showData()
{
    cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
}
Numbers Numbers::operator -()
{
   Numbers temp;
   temp.x=-x;
   temp.y=-y;
   temp.z=-z;
   return temp;
}
int main()
{
    Numbers n1,n2,n3;
    n1.setData(1,2,3);
    n2.setData(4,5,6);
    n1.showData();
    n2.showData();
    n3=-n1;
    n3.showData();
    n3=-n2;
    n3.showData();
    
}