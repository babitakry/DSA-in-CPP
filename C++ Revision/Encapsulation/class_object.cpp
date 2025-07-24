#include<iostream>
using namespace std;
class Book
{
     int bookid;
     char title[20];
     float price;
     void inputData()  //member function
     {
        cout<<"Enter bookid, title ,and price : ";
        cin>>bookid;
        cin.ignore();  //fflush(stdin);
        cin.getline(title,20);  //fgets(title,20,stdin);
        cin>>price;

    }
     void displayData()  //member function
     {
        cout<<bookid<<" "<<title<<" "<<price<<endl;
     }
};
int main()
{
    // Book b1={1,"Drilling in C",345.0},b2;
    // Book b3;
    // b3.inputData();
    // b3.displayData();
}