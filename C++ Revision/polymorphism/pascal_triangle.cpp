#include<iostream>
using namespace std;
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
       f=f*i;
    return f;
}
int combi(int n,int r)
{
    int i,c;
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
                cout<<combi(i-1,r);
                k=0;
                r++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<"\n";

    }
}
int main()
{
    int line;
    cout<<"Enter a number upto which you print pascal triangle : ";
    cin>>line;
    printPascal(line);
}