#include<iostream>
#include<fstream>
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
        cout<<"Enter bookid,title and price :";
        cin>>bookid;
        if(bookid<0)
          bookid=-bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;  
    }  
    void store();
    void viewAllBooks();
};
void Book::store()
{
    ofstream fout; //create object of input or output stream
    fout.open("bookfile.dat",ios::app|ios::binary); //open a file
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("bookfile.dat",ios::in|ios::binary);
    if(!fin)
      cout<<"File not found";
    else
    {
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
        displayBook();
        fin.read((char*)this,sizeof(*this));
       }
    }  
   fin.close();
}
int menu()
{
    int choice;
    cout<<"\n 1. Store new Book Record";
    cout<<"\n 2. view All Book Records";
    cout<<"\n 3. Exit";
    cout<<"\n\nEnter your choice: ";
    cin>>choice;
    return choice;
}
int main()
{
    Book b1;
    while(true)
    {
        switch(menu())
        {
        case 1:
            b1.inputBook();
            b1.store();
            break;
        case 2:
            b1.viewAllBooks();
            break;
        case 3:
            exit(0);  
        default:
            cout<<"Invalid Choice";       
        }
    }
    return 0;
}