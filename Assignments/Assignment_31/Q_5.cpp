// Define a function to print all the prime factor of a given number. [for example num=36,prime factors are 2,3]
#include<iostream>
#include<stdio.h>
using namespace std;
void primefactors(int n)
{
    int i;
    for(i=2;i<=n;i=nextPrime(i))
       if(n%i==0)
          cout<<i<<" ";
          
}
int nextPrime(int n)
{
    while (!isPrime(++n));
    return n;
    
}

bool isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
          break;
    }      
    if(n==i)  
      return true;
    return false;   
    
}

int main()
{
    int n=36;
    
    printf("Prime Factor = ");
    primefactors(n);
    
    return 0;
}
