// Define a class customer with instance members cust_id,name,email,mobile. Define non parameterised constructor or parameterised constructor in the class.
#include<iostream>
using namespace std;
class Customer
{
    private:
       int cust_id;
       string name,email,mobile;
    public:
       Customer()                    //non parameterised constructor.
       {
        cust_id=0;
        name="Anonymous";
        email="xyz@example.com";
        mobile="9800438833";
       }  
       Customer(int id,string n,string e,string m)   //parameterised constructor.
       {
          cust_id=id;
          name=n;
          email=e;
          mobile=m;
       }

};