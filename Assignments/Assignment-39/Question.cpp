//Q-3. Define a class Employee with empid, name and salary as instance variables. Also provide instance methods to input and display Employee record.
#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Employee
{
    private:
        int empid;
        char name[20];
        float salary;
    public:
        void getEmployeeData()
        {
            cout<<"Enter employee id,name and salary of a Employee : ";
            cin>>empid;
            cin.ignore();
            cin.getline(name,19);
            cin>>salary;
        }
        void showEmployeeData()
        {
            cout<<"\n"<<empid<<" "<<name<<" "<<salary<<endl;
        }
   
        int storeEmployeeData();
        void printAllEmployee();    
        void searchEmployee(int);
        void editEmployee(int);
        void deleteEmployee(int);
};
//Q-4. In question 3, define a member function to store new employee records in a file. 
int Employee::storeEmployeeData()
{
    if(empid==0 && salary==0)
    {
       cout<<"Employee data not initiallized";
       return (0);
    }
    else
    {   
    ofstream fout;
    fout.open("Employee.dat",ios::app | ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    return (1);
    }
}
//Q-5. In question 3, define a member function to print all employee records stored in a file.
void Employee::printAllEmployee()
{
    ifstream fin;
    fin.open("Employee.dat",ios::in | ios::binary);
    if(!fin)
      cout<<"File not found";
    else
    {
      fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
        printAllEmployee();
        fin.read((char*)this,sizeof(*this));
      }   
    } 
    fin.close(); 
}
//Q-6. In question 4, define a member function to search an employee by his empid in file. Print his record it found, otherwise display a message of search failed.
void Employee::searchEmployee(int t)
{
    int counter=0;
    ifstream fin;
    fin.open("Employee.dat",ios::in | ios::binary);
    if(!fin)
      cout<<"File not found";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(t==this->empid)
            {
                showEmployeeData();
                counter++;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(counter==0)
          cout<<"\nSearch failed";
        fin.close();  
    } 
    
}
//Q-7. define a member function to edit employee data of given name or id.
void Employee::editEmployee(int t)
{
   fstream file;
   file.open("Employee.dat",ios::in | ios::out | ios:: ate | ios::binary);
   file.seekg(0);
   file.read((char*)this,sizeof(*this));
   while(!file.eof())
   {
    if(t==this->empid)
    {
        getEmployeeData();
        file.seekp(file.tellp()-sizeof(*this));
        file.write((char*)this,sizeof(*this));
    }
    file.read((char*)this,sizeof(*this));
   }
}
//Q-8. define a member function to delete an employee record of given empid.
void Employee::deleteEmployee(int t)
{
    ifstream fin;
    ofstream fout;
    fin.open("Employee.dat",ios::in | ios::binary);
    if(!fin)
      cout<<"\nFile not found";
    else  
    {
        getch();
        fout.open("tempEmployee.dat",ios::out | ios::binary);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(t!=this->empid)
              fin.read((char*)this,sizeof(*this));
            fout.write((char*)this,sizeof(*this));  
        }
        fin.close();
        fout.close();
        getch();
        remove("Employee.dat");
        getch();
        rename("tempEmployee.dat","Employee.dat");
    }
}
int menu()
{
   int choice;
   cout<<"\n Employee Records : ";
   cout<<"\n 1. Store Employee record";
   cout<<"\n 2. Print all Employee record";
   cout<<"\n 3. Search Employee record";
   cout<<"\n 4. Delete Employee record";
   cout<<"\n 5. Update Employee record";
   cout<<"\n 6. Exit";
   cout<<"\n\n\n Enter your choice";
   cin>>choice;
   return choice;
}

int main()
{
    Employee e1;
    // e1.getEmployeeData();
    // e1.showEmployeeData();
    // e1.storeEmployeeData();
    e1.showEmployeeData();
    // e1.showEmployeeData();
//     int empid;
//     Employee e1;
//    while(1)
//    {
//    system("cls");
//    switch(menu())
//    {
//       case 1:
//          e1.getEmployeeData();
//          e1.storeEmployeeData();
//          cout<<"\n Record inserted";
//          break;
//       case 2:
//          e1.printAllEmployee();
//          break;
//       case 3:
//          cout<<"\n Enter employee id to search";
//          cin>>empid;
//          e1.searchEmployee(empid);
//          break;
//       case 4:
//          cout<<"\n Enter employee id to delete record";
//          cin>>empid;
//          e1.deleteEmployee(empid);
//          break;
//       case 5:
//          cout<<"\nEnter employee id to edit record";
//          cin>>empid;
//          e1.editEmployee(empid);
//          break;
//       case 6:
//          cout<<"\n Thanku you for using this application";
//          cout<<"\n Press any key to exit";
//          getch();
//          exit(0);
//       default:
//          cout<<"\n Invalid Choice";                  
//    }
//    getch();
// }
   return 0;
}
   
