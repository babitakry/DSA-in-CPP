// Define a function to print a substring from startindex (inclusive) to endindex (exclusive) .Define function in such a way that if second argument is not provided.String will print till the last possible index.
#include<iostream>
#include<string.h>
using namespace std;

void printSubstring(char str[],int startindex,int endindex=9)
{
    //if(endindex==9)
      //  endindex=strlen(str);
    for(int i=startindex;i<endindex;i++)
        cout<<str[i];
}
int main()
{
    char str[50]="classmate";
    int L;
    L=strlen(str);
    cout<<"Length of string :"<<L<<endl;
    int startindex=1,endindex=8;
    cout<<"Substring = ";
    printSubstring(str,startindex,endindex);
    
}
