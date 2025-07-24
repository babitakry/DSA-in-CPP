/*  Consider a class Distance 
    class Distance
    {
        private:
           int km,m,cm;
        public:
           //methods;
    };
    Overload the operator + to add two distance objects.
    */
#include<iostream>
using namespace std;
class Distance
{
    private:
       int km,m,cm;
    public:
       void setDistance(int x,int y,int z)
       {
           km=x;
           m=y;
           cm=z;
       }   
       void showData()
       {
          cout<<"\n km="<<km<<" m="<<m<<" cm="<<cm;
       }
       Distance operator+(Distance d)
       {
         Distance temp;
         temp.cm=cm+d.cm;
         temp.m=m+d.m+temp.cm/100;
         temp.cm%=100;
         temp.km=km+d.km+temp.m/1000;
         temp.m%=1000;
         return temp;
       }

};
int main()
{
    Distance d1,d2,d3;
    d1.setDistance(3,500,607);
    d2.setDistance(5,505,409);
    d3=d1+d2;
    d3.showData();
}