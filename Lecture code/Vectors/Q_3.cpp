// Count the number of elements strictly greater than value x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(7);
    cout<<"Enter "<<v.size()<<" elements in array :";
    for(int i=0;i<v.size();i++)
        cin>>v[i];
    cout<<endl;    
    cout<<"Elements in array : ";
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;   
    int x,count=0;
    cout<<"Enter a reference number :";
    cin>>x;
    cout<<endl;
    cout<<"Strictly greater than value "<<x<<" is : ";
    for(int i=0;i<v.size();i++)
       if(v[i]>x)
        count++;
    cout<<count;    
}