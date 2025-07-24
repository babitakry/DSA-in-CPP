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
       friend Item operator+(int,Item);
       friend Item operator-(Item);
       friend Item operator+(Item,Item);
       friend void f1(Item);        //Declaration of friend function

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
     Item i1,i2,i3,i4;
     i1.setData(3,5);
     i2.setData(9,4);
     i3=i1+i2;  // operator+(i1,i2); 
     i3.showData();
     i3=5+i1;
     i3.showData();
     i4=-i1;
     i4.showData();
     f1(i1);//Calling of friend fucntion
     return 0;
     }