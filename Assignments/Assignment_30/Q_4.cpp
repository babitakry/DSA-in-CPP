// Define a function to print Pascal Triangle up to N lines.
#include<iostream>
#include<stdio.h>
using namespace std;
int fact(int n);
int combi(int n,int r);
void printPascal(int line);
int main()
{
    int line;
    cout<<"Enter line:";
    cin>>line;
    printPascal(line);
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
      f=f*i;
    return f;  
}
int combi(int n,int r)
{
    int c;
    c=fact(n)/(fact(n-r)*fact(r));
    return c;
}
void printPascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i && k)
            {
                cout<<combi(i-1,r)<<"    ";
                k=0;
                r++;
            }
            else
            {
                cout<<"    ";
                k=1;
            }
        }  
        printf("\n");  
    }
}