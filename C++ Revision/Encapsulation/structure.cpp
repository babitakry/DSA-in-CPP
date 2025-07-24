// In C++ use of struct keyword is optional on every use of non primitive type.
#include<iostream>
//#include<string.h>
using namespace std;
struct Book
{
   int bookid;
   char title[20];
   float price;
};
Book inputData()  //No use of struct keyword.
{
    Book b;
    cout<<"Enter bookid, title, and price : ";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;
}
void displayData(Book b) //No use of struct keyword.
{
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}
int main()
{
    Book b1,b2,b3;
    b1=inputData();
    b2=inputData();
    b3=inputData();
    displayData(b1);
    displayData(b2);
    displayData(b3);
    return 0;
}