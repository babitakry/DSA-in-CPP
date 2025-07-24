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
       Item operator+(int);
       Item operator-();
       Item operator+(Item);
       friend void f1(Item);        //Declaration of friend function

 };
      Item Item::operator+(int k)
      {
           Item temp;
           temp.a=a+k;
           temp.b=b;
           return temp;
      }
      Item Item::operator-()
      {
         Item temp;
         temp.a=-a;
         temp.b=-b;
         return temp;
      }
     Item Item::operator+(Item i)
     {
        Item temp;
        temp.a=a+i.a;
        temp.b=b+i.b;
        return temp;
     }

     void f1(Item i)              //Definition of friend function
     {
      int c;
      c=i.a+i.b;                  //More efficient way to access the data of class
      cout<<"Sum is "<<c<<endl;
     }

     int main()
     {
     Item i1,i2,i3,i4;
     i1.setData(3,5);
     i2.setData(9,4);
     i3=i1+i2;
     i3.showData();
     i3=i1+5;
     i3.showData();
     i4=-i1;
     i4.showData();
     f1(i1);                     //Calling of friend fucntion
     return 0;
     }