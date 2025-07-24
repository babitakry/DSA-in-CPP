#include <iostream>
#include<string.h>
using namespace std;
class Person     //Base Class
{
private:
    int age;
    char name[20];
protected:
    void setAge(int a)
    {
        age=a;
    }    
    void setName(char n[])
    {
        strcpy(name,n);
    }
public:
    int getAge()
    {
        return age;
    }    
    char* getName()
    {
        return name;
    }
};
class Employee:public Person  //Derived Class  //User 2 for class Public
{
private:
     float salary;
public:
     void setEmployeeData(char n[],int a,float s) 
     {
        setAge(a);
        setName(n);
        salary=s;
     }     
};
int main()
{
    Person p1; //User-1 for clas Public
   // p1.setAge(40);    //Error is shown because User-1 can't access any methods of Protected and Private visibility mode
   // p1.setName("Nitish");
    p1.getAge();
    p1.getName();
}