#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;

};
struct Book input_book();
void displayBook(struct Book b);
int main()
{
   struct Book b1={1,"Drilling C",345.0},b2;
   struct Book b3;
   b2.bookid=2;
   strcpy(b2.title,"....Let us C....");
   b2.price=799.0;
   b3=input_book();
   displayBook(b1);
   displayBook(b2);
   displayBook(b3);
   return 0;
}
struct Book input_book()
{
    struct Book b;
    cout<<"Enter bookid, title and price:";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;
}
void displayBook(struct Book b)
{
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}