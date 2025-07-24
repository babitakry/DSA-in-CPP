#include<iostream>
using namespace std;
class Item
{
   private: 
       int a,b; //instance member variable
       static int k; //static member variable
   public:
       void set_a(int x){ a=x;}
       void set_b(int y){ b=y;}
       static void set_k(int m){ k=m;}//static method
       int get_a(){return a;}
       int get_b(){return b;}
       static int get_k(){return k;}  //static method  
};
int Item::k; //Defining static member variable
int main()
{
    Item::set_k(10);
    cout<<"k="<<Item::get_k();
    
}