/* When to use this pointer ?
   1. Name conflict between instance member variables and local variables.*/
#include<iostream>
using namespace std;
class Item
{
    private:
       int a,b;
    public:
       void setData(int a,int b)
       {
           this->a=a;//a=a; //Data clashes
           this->b=b;//b=b; //Data clashes
       }  
       void showData()
       {
          cout<<"a="<<a<<" b="<<b<<endl;
       } 
};
int main()
{
    Item i1,i2,i3;
    i1.setData(10,20); //this pointer now points i1 object because now i1 is caller object.
    return 0;
}