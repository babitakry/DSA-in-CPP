// Define circle class with radius as instance variable.Define two constructor in the class non-parameterised and parameterised.
#include<iostream>
using namespace std;
class Circle
{
    private:
       float radius;
    public:
       Circle(float r)   //parameterised constructor.
       {
          radius=r;
       } 
       Circle()          //Non parameterised constructor.
       {
          radius=1;
       }
};