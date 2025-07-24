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
       friend void f1();   //Declaration of friend function

 };
  void f1()
  {
      Item t1;           //Not more efficient way to access the class data;
      t1.setData(10,20);
      int c;
      c=t1.a+t1.b;
      cout<<"Sum is "<<c;
  }
 int main()
  {
      Item i1;
      i1.setData(3,5);
      f1();   //Calling of friend fucntion
      return 0;
  }