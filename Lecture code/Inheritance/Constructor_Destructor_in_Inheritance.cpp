#include <iostream>
#include<string.h>
using namespace std;
class Person     //Base Class
{
private:
    int age;
    char name[20];
protected:
    void setAge(int a){ age=a;}    
    void setName(char n[]){strcpy(name,n);}
public:
    int getAge(){return age;}    
    char* getName(){return name;}
    
    Person(int a,char n[]) //Constructor
    {
       age=a;
       strcpy(name,n);
    }
    ~Person()  //Destructor
    {
       cout<<"\n Destructor of Class Person";
    }
};
class Employee:public Person  //Derived Class  //User 2 for class Public
{
private:
     float salary;
public:
     Employee():Person(20,"Babita")  //Constructor
     {}
     void setEmployeeData(char n[],int a,float s) 
     {
        setAge(a);
        setName(n);
        salary=s;
     } 
     ~Employee()
     {
        cout<<"\n Destructor of Class Employee";
     }    
};
int main()
{
    Employee e1;
    Person p1(20,"Arjun"),p2(35,"Nitish");
    
    return 0;
}