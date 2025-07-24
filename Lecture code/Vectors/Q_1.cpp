// Find the last occurence of an element x in a given array.
//Example : 1 2 3 2 1 3 1
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int element;
    cout<<"Enter elements in array : ";
    for(int i=0;i<7;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    cout<<endl;
    cout<<"Elements of arrays : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x;
    int occurence;
    cout<<"Enter a numbers whose last occurence you want :";
    cin>>x;
    // for(int i=0;i<v.size();i++)
    //    if(v[i]==x)
    //    {
          
    //       occurence=i;
    //       continue;
    //    }
    for(int i=v.size()-1;i>=0;i--)
    {
         if(v[i]==x)
            occurence=i;
            break;
    }
    cout<<"Last occurence of "<<x<<" is "<<occurence;   

}