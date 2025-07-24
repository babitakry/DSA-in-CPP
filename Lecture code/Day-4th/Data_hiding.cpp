//Data Hiding : Data hiding is not allowing you to access some of the members of the structure by making them private.
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book
{
    private:

    int bookid;
    char title[20];
    float price;

    public:

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
    Book /*b1={1,"Drilling C",345.0},b2,*/b3;
   // b2.bookid=2;
   // strcpy(b2.title,"C in Depth");
   // b2.price=555.0;
    b3.inputBook();
    //b1.displayBook();
    //b2.displayBook();
    b3.displayBook();
}

