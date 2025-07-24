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
      friend Item operator+(int,Item);
      friend Item operator-(Item);
      friend Item operator+(Item,Item);  
      friend void f1(Item);
};
Item operator+(int k,Item i)
{
    Item temp;
    temp.a=k+i.a;
    temp.b=i.b;
    return temp;

}
Item operator-(Item i)
{
    Item temp;
    temp.a=-i.a;
    temp.b=-i.b;
    return temp;
}
Item operator+(Item x,Item y)
{
    Item temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
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
    Item i1,i2,i3,i4;
    i1.setData(3,5);
    i2.setData(9,4);
    f1(i1); //calling of friend function.
    i3=i1+i2; //i1.operator+(i2); //BINARY OPERATOR
    i3.showData();
    i3=-i1;   //i1.operator-();  //UNARY OPERATOR
    i3.showData();
    i4=5+i1;  //operator+(5,i1); 
    i4.showData(); 
    
    return 0;
}