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
          cout<<"a="<<a<<" b="<<b<<endl;
       }
       friend ostream& operator<<(ostream&,Item);
       friend istream& operator>>(istream &,Item &);
       friend Item operator+(int,Item);
       friend Item operator-(Item);
       friend Item operator+(Item,Item);
       friend void f1(Item);        //Declaration of friend function

 };
      ostream& operator<<(ostream &dout,Item i)
      {
        dout<<"a="<<i.a<<" b="<<i.b<<endl;
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
     Item operator+(Item X,Item Y)//Using friend operator!!
     {
        Item temp;
        temp.a=X.a+Y.a;
        temp.b=X.b+Y.b;
        return temp;
     }

     void f1(Item i)//Definition of friend function
     {
      int c;
      c=i.a+i.b;//More efficient way to access the data of class
      cout<<"Sum is "<<c<<endl;
     }

     int main()
     {
       
       Item i1,i2,i3;
       cout<<"Enter an Item :";
       cin>>i1;  //cin is an object which is defined in a predefined class which is istream .cin object called extraction operator which is a member of istream class whenever this operator >> is    defined, an argrument will be passed and that argument will be Item type reference i.e (Item &i) and    that argument will be Item type but Question is that how that operator function know ,that will be   Item type reference .That means operator>>(Item &i) not available in istream class.
       cout<<i1;
       i3=5+i1;
       i3.showData();
       f1(i1);
       cout<<endl;
     return 0;
     }