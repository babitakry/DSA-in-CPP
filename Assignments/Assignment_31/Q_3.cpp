// Define a function to rotate an array by n positions in the d direction.Implement position and direction using default arguments.Argument d can be -1 or 1 denoting left or right direction.Argument n should be the last argument with default value 1.
#include<iostream>
#include<stdio.h>
using namespace std;
void rotate(int A[],int size,int n=1,int d=1);
int main()
{
   int n,d,size;
   cout<<"Enter size of array : ";
   cin>>size;
   int A[size];
   cout<<"Enter numbers in array : ";
   for(int i=0;i<=size-1;i++)
      cin>>A[i];
   cout<<"Enter position : ";
   cin>>n;
   cout<<"Enter left shift or right shift:";
   cin>>d;
   rotate(A,size,n,d);
   
   return 0;    
}
void rotate(int A[],int size,int n,int d)
{
    if(d==1)
    {
     while(n)
     {
        int temp=A[size-1];
        for(int i=A[size-2];i>=0;i--)
           A[i+1]=A[i];
        A[0]=temp;
        n--;   
     }
    
    }
    else
    {
        while(n)
        {
            int temp=A[0];
            for(int i=0;i<=A[size-2];i++)
              A[i]=A[i+1];
            A[size-1]=temp;
            n--;  
        }
    
    }
    for(int i=0;i<=size-1;i++)
       cout<<A[i]<<" ";
}