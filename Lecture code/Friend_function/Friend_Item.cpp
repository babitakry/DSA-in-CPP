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
     friend void f1(Item);   //Declaration of friend function

 };
  void f1(Item i)   //Definition of friend function
  {
      int c;
      c=i.a+i.b;  //More efficient way to access the data of class
      cout<<"Sum is "<<c;
  }

 int main()
 {
     Item i1;
     i1.setData(3,5);
     f1(i1);   //Calling of friend fucntion
     return 0;
 }

