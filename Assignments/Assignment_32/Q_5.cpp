// Define a class circle with radius as its property.Provide setRadius() and getRadius() methods. Also define methods to return area and circumference of circle.
#include<iostream>
using namespace std;
class Circle
{
    private:
       float radius;
    public:
       void setRadius(float r)
       {
         radius=r;
       }  
       float getRadius()
       {
         return radius;
       } 
       float get_area_circle()
       {
         return 3.14*radius*radius;
       }
       float get_circumference()
       {
         return 2*3.14*radius;
       }
       void showArea()
       {
         cout<<"\nArea="<<3.14*radius*radius;
       }
       void showCircumference()
       {
         cout<<"\nCircumference="<<2*3.14*radius;
       }
};
int main()
{
    Circle c1,c2;
    c1.setRadius(5.6);
    c1.getRadius();
    c1.get_area_circle();
    c1.get_circumference();
    c1.showArea();
    c1.showCircumference();
}