/* 2.whenever it is required to represent current object in instance member function.*/
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
       Item greater(Item obj)
       {
          if((a+b) > (obj.a+obj.b))
             return *this;
          else 
             return obj;   
       }
};
int main()
{
    Item i1,i2,i3;
    i1.setData(10,20); //this pointer now points i1 object because now i1 is caller object.
    i2.setData(8,20);
    i3=i1.greater(i2);
    i3.showData();
    return 0;
}