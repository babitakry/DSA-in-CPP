#include <iostream>
using namespace std;
int main()
{
    try
    {
        int a, b;
        cout << "Enter two numbers : ";
        cin >> a >> b;
        int c;
        if (b == 0)
            throw 1;
        c = a / b;
        cout << "Result is " << c << endl;
    }
    catch(int e)
    {
        cout<<"Run Time Error: "<<endl;
    }
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    int z=x+y;
    cout<<"Sum is "<<z;
    cout<<endl;

    return 0;
}