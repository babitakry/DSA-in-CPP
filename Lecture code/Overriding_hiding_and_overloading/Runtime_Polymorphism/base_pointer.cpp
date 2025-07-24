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
    A *p;
    B o2;
    p=&o2;
    p->f1(); 
    // p->f2(); For better understanding of this code by the help of copy note written in orange color pen. 
    // o2.f1();  //A due to early binding
    // o2.f2();  //B due to early binding 
    return 0;
}