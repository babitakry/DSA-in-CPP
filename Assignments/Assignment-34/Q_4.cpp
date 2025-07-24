// Define a class Book with bookid,title and price as instance member variables.Define non parameterised and parameterised constructor in the class.
#include<iostream>
using namespace std;
class Book
{
    private:
       int bookid;
       string title;
       float price;
    public: 
       Book()          //Non parameterised constructor.
       {
         bookid=0;
         title="xyz";
         price=0;
       }  
       Book(int id,string t,float p)
       {
          bookid=id;
          title=t;
          price=p;
       }
};