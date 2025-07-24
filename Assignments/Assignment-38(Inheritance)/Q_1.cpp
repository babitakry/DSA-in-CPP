//Define a class Person with name and age as instance variables as private members.Provide setters and getters as protected methods. Derive a class Employee from Person class with private instance variable salary.Provide public methods setEmployee() and showEmployee().
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
       string name;
       int age;
    protected:
       void setName(string n){ name=n;}
       void setAge(int a){ age=a;}
       string getName(){ return name ;}
       int   getAge() { return age;}

};
class Employee:public Person
{
    private:
      double salary;
    public:
      void setEmployee(string n,int a,double s)
      { 
        setName(n);
        setAge(a);
        salary=s;
      }
      void showEmployee()
      {
          cout<<"Name :"<<getName();
          cout<<"Age :"<<getAge();
          cout<<"Salary :"<<salary;
      }
};