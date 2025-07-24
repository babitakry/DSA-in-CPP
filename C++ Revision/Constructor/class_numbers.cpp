#include<iostream>
using namespace std;
class Numbers
{
    private:
       int size;
       int *arr;
    public:
       Numbers (int size) //constructor
       {
         this->size=size;
         arr=new int[size];
       }  
       void setData(int s)
       {
         size=s;
         cout<<"Enter "<<size<<" numbers : ";
         for(int i=0;i<size;i++)
           cin>>arr[i];
       }
       void showData()
       {
         cout<<"\nsize of Array = "<<size<<"\n";
         cout<<"Array Elements :";
         for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
       }
       Numbers(Numbers &N) //Definition of copy constructor
       {
         size=N.size;
         arr=new int[size];
         for(int i=0;i<size;i++)
           arr[i]=N.arr[i]; 
       } 
       ~Numbers()  //destructor
       {
         delete[]arr;
       }
};
int main()
{
    Numbers n1(3);
    Numbers n2=n1;// calling of copy constructor.
    n1.setData(5);
    n1.showData(); 
    
    return 0;
}
  