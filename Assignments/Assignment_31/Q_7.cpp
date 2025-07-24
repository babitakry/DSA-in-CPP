// Define overloaded functions to calculate volume of a cuboid,cone and sphere.
#include<iostream>
using namespace std;
float Volume(float l,float b,float H_cuboid)//cuboid
{
    return l*b*H_cuboid;
}
float Volume(float R_co,float H_cone)//cone
{
    return ((3.14*R_co*R_co*H_cone)/3);
}
float Volume(float R_sp)//sphere
{
    return (4*3.14*R_sp*R_sp*R_sp)/3;
}
int main()
{
    float l=4.0,b=2.0,H_cuboid=5.0,H_cone=8.0,R_co=2.0,R_sp=4.0;
    cout<<"Volume of cuboid = "<<Volume(l,b,H_cuboid)<<endl;
    cout<<"Volume of cone = "<<Volume(R_co,H_cone)<<endl;
    cout<<"Volume of sphere = "<<Volume(R_sp);
    return 0;
}
