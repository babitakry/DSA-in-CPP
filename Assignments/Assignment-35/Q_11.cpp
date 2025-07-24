/* Consider the following class Array
    class Array
    {
        int *p;
        int size;
       public:
         //methods; 
    };
    Define constructor to allocate an array of given size (size is given through parameter).
       Define a subscipt operator to access element at given index. Define destructor to deallocates the memory of array.*/
#include<iostream>
using namespace std;
#define ARRAY_INDEX_OUT_OF_BOUND 1
class Array
{
    int *p;
    int size;
  public:
    Array(int s)
    {
      size=s;
      p=new int[s];
    }  
    ~Array()
    {
      delete []p;
    }
    int& operator[](int index)
    {
      if(index>=size)
      {
        cout<<"Array index out of bound";
        throw
ARRAY_INDEX_OUT_OF_BOUND;    
      }
    return p[index];
    }
};       