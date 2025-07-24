#include<iostream>
using namespace std;
class Item
{
    private:
      int a,b;
    public:
      void setData(int a,int b) //since here name is conflict between member variable and local variable.
      {
          this->a=a;
          this->b=b;
      } 
      void showData()
      {
        cout<<"\na="<<a<<" b="<<b;
      } 
      Item greater(Item obj)
      {
        if((a+b)>(obj.a+obj.b))
           return *this;  // since whenever it is required to represent current object in instance member function.
        else
           return obj;   
      }
};
int main()
{
    Item i1,i2,i3;
    i1.setData(10,20);  //i1 is current caller object then this pointer point i1 object.
    i2.setData(8,20);
    i3=i1.greater(i2);
    i3.showData();
    return 0;
}