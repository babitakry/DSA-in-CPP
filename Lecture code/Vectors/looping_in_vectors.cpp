#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Enter elements in array :";
    //for loop;
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    v.push_back(30);
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;   
    
    //for each loop;
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
     v.erase(v.end()-1);
    //while loop
    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx]<<" ";
        idx++;
    }
    cout<<endl;
   
    v.insert(v.begin()+1,55);
    for(int i=0;i<v.size();i++)
         cout<<v[i]<<" ";

}