// Define a function to sort an array of strings in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it .
#include<iostream>
#include<string.h>
using namespace std;
void sort_string(char str[],int decision=1);
int main()
{
    int i,x;
    char str[50];
    cout<<"Enter strings : ";
    cin.getline(str,50);
    cout<<"Enter decision:";
    cin>>x;
    sort_string(str,x);
    return 0;


}
void sort_string(char str[],int decision)
{
    int i,r;
    char t;
    if(decision)
    {
        for(r=1;r<=strlen(str)-1;r++)
        {
            for(i=0;i<=strlen(str)-r-1;i++)
            {
                if(str[i]>str[i+1])
                {
                   t=str[i];
                   str[i]=str[i+1];
                   str[i+1]=t;
                }
            }
        }
        
           cout<<str;
    }
    else
    {
        for(r=1;r<=strlen(str)-1;r++)
        {
            for(i=0;i<=strlen(str)-r-1;i++)
            {
                if(str[i]<str[i+1])
                {
                   t=str[i];
                   str[i]=str[i+1];
                   str[i+1]=t;
                }
            }
        }
        cout<<str;
    }
}
