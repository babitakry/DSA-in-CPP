// Define a function to calculate  HCF of two numbers.
#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0 && b%H==0)
          return H;
    }
}
    
int main()
{
    int a,b;
    cout<<"Enter +ve numbers : ";
    cin>>a>>b;
    cout<<"HCF = "<<hcf(a,b);
    return 0;
}