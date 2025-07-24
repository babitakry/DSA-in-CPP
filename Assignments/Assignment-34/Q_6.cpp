// Define a class Numbers with size and arr pointer as instance variables.Provide constructor to initialise instance members,dynamically allocate an array of given size and store address in arr variable of object. Also define destructor to allocate memory of array. Implement deep copy using copy constructor to avoid memory issues.
#include<iostream>
using namespace std;
class Numbers
{
    private:
      int size;
      int *arr;
    public:
      Numbers(int size)
      {
        this->size=size;
        arr=new int[size];
      }  
      Numbers(Numbers &N)
      {
        size=N.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
           arr[i]=N.arr[i];
      }
      ~Numbers()
      {
        delete []arr;
      }
};
