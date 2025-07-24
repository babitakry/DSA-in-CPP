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
      friend ostream& operator<<(ostream&,Item );
      friend istream& operator>>(istream&,Item&);
      friend Item operator+(int,Item);
      friend Item operator-(Item);
      friend Item operator+(Item,Item);  
      friend void f1(Item);
};
ostream& operator<<(ostream &dout,Item i)
{
    cout<<i.a<<" "<<i.b;
    return cout;
}
istream& operator>>(istream &din,Item &i)
{
    din>>i.a>>i.b;
    return din;
}
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
    cout<<"Enter an item : ";
    cin>>i1;  //cin is a caller object of istream class which call the extraction operator and pass the reference object i1.
    cout<<i1;
    
    
    return 0;
}