#include<iostream>
#include<vector> //header file
using namespace std;
int main()
{
    vector<int>v; // declaration of vector
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
   
    v.resize(5);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

}