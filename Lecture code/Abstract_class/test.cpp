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
int main()
{
   // Test obj;
}