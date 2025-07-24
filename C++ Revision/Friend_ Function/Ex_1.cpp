#include<iostream>
using namespace std;
class Item
{
    private:
      int a,b; 
    public:
      void setData(int x,int y)
      {
        a=x;
        b=y;
      }
      void showData()
      {
        cout<<"\na="<<a<<" b="<<b;
      }
      Item operator+(Item);
      friend void f1(Item);
};
Item Item::operator+(Item i)
{
    Item temp;
    temp.a=a+i.a;
    temp.b=b+i.b;
    return temp;
}
void f1(Item i)
{
    int c;
    c=i.a+i.b;
    cout<<"Sum = "<<c;
}
int main()
{
    Item i1,i2,i3;
    i1.setData(3,5);
    i2.setData(9,4);
    i3=i1+i2; //i1.operator+(i2);
    f1(i1); //calling of friend function.
    i3.showData();
    return 0;
}