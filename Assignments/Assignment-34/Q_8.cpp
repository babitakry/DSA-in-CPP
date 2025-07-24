// Define a class Date with d,m,y as instance variable.Initialize members using initialisers.
#include<iostream>
using namespace std;
class Date
{
    private:
       int d,m,y;
    public:
       Date(int d,int m,int y):d(d),m(m),y(y)
       {}   
};