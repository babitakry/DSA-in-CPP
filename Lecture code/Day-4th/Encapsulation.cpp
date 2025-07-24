/* ENCAPSULATION : An act of combining all properties and all methods  retlated to same entity is knows as Encapsulation.*/
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;

void displayBook()
  {
    cout<<bookid<<" "<<title<<" "<<price<<endl;

  }
void inputBook()
  {
    cout<<"Enter bookid, title and price : ";
    cin>>bookid;
    if(bookid<0)
      bookid=-bookid;
    cin.ignore();
    cin.getline(title,20);
    cin>>price; 
  }

};

int main()
{
    Book b1={1,"Drilling C",345.0};
    Book b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"C in Depth");
    b2.price=999.0;
    b3.inputBook();
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
}
