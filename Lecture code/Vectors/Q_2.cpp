// Count the number of occurences of a particular element x.
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
    int x;
    cout<<"Enter a numbers whose last occurence you want :";
    cin>>x; 
    cout<<endl;
    cout<<"Occurence indexes are = ";  
    for(int i=0;i<v.size();i++)
      if(v[i]==x)
         cout<<i<<" ";   
        
}