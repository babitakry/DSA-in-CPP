// Define a class Room for a hotel management project with room number,room type ,is_AC,price as instance variables.Initialise variables using constructor.
#include<iostream>
using namespace std;
class Room
{
    private:
       int roomno;
       string roomtype;
       bool is_AC;
       float price;
    public:
       Room(int r,string rt,bool ac,float p)
       {
        roomno=r;
        roomtype=rt;
        is_AC=ac;
        price=p;
       }   
};