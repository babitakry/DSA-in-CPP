#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Book
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
    Book b1,b2,b3;
    b1.inputBook();
    b1.displayBook();
    b2.inputBook();
    b2.displayBook();
    b3.inputBook();
    b3.displayBook();
}


