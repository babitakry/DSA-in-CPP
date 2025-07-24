#include<iostream>
using namespace std;
class Test
{
   private:
     int a,b;
   public:
     virtual void f1()=0; //Pure Virtual Class.
     void f2()
     {
        cout<<"f2";
     }  

};
class DummyTest:public Test
{
      public:
        void f1()  //OverriddenFunction of child class.
        {
            cout<<"Overriden Function "; 
        }
};
int main()
{
    Test *p=new DummyTest;
    p->f1();
   // DummyTest obj;
   // obj.f1();
}