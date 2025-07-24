// Write a function to swap two arrays.
#include<iostream>
using namespace std;
void swapArrays(int A[],int B[],int N)
{
    int t;
    cout<<"Before Swapping : ";
    for(int i=0;i<N;i++)
       cout<<" "<<A[i];
    cout<<"\t";
    for(int i=0;i<N;i++)
    {
        cout<<" "<<B[i];
    }
    cout<<endl;  
    for(int i=0;i<N;i++)
    {
       t=A[i];
       A[i]=B[i];
       B[i]=t;
    }
    cout<<"After Swapping : ";
    for(int i=0;i<N;i++)
       cout<<" "<<A[i];
    cout<<"\t";
    for(int i=0;i<N;i++)
    {
        cout<<" "<<B[i];
    }
}
int main()
{
    int A[]={1,2,3,4,5},B[]={6,7,8,9,10};

    swapArrays(A,B,5);
    return 0;
}