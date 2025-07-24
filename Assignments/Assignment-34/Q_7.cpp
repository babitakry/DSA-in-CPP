// Define a class Student and write a program to enter student detail using constructor and define member function to display all the details.
#include<iostream>
using namespace std;
class Student 
{
    private:
       int rollno;
       string name;
    public:
       Student()
       {
          cout<<"Enter roll number";
          cin>>rollno;
          cout<<"Enter name";
          cin>>name;
       }   
       void showStudent()
       {
          cout<<"\nRoll No.="<<rollno<<" "<<"Name="<<name;
       }
};