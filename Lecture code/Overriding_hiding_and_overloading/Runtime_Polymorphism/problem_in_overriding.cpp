#include<iostream>
using namespace std;
class A
{
   public:
      void f1()
      {
         cout<<"f1 is A"<<"\n";
      } 
};

class B:public A
{
   public:
      void f2()
      {
         cout<<"f2 is B"<<"\n";
      }

};
int main()
{
    // A *p=new B;  Dynamically memory allocation of object of B class
    A *p;
    B o2;
    p=&o2;
    p->f1(); 
     
    return 0;
}