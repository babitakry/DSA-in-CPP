#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Book
{
    private:
       int bookid;
       char title[20];
       float price;
    public:
       //Constructor
       Book()
       {
        bookid=0;
        strcpy(title,"No title");
        price=0;
       }  
       void getBookData()
       {
        cout<<"Enter bookid, title and price of a book : ";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,19);
        cin>>price;
       } 
       void showBookData()
       {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price;
       }
       int storeBook(); 
       void viewAllBooks();
       void searchBook(char*);
       void deleteBook(char*);
};
//Store Book Data in a file
int Book::storeBook()
{
   if(bookid==0 && price==0)
   {
    cout<<"Book data not initiallized";
    return (0);
   }
   else
   {
   ofstream fout;
   fout.open("Newfile.dat",ios::app | ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   return (1);
   }
}
//View Store Book Data of a file
void Book::viewAllBooks()
{
   ifstream fin;
   fin.open("NewFile.dat",ios::in | ios::binary);
   if(!fin)
      cout<<"File not found";
   else
   {
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        showBookData();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
   }   
}
//Search Book which is stored in a file
void Book::searchBook(char *t)
{
  int counter=0;
  ifstream fin;
  fin.open("NewFile.dat",ios::in | ios::binary);
  if(!fin)
    cout<<"File not found";
  else
  {
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if(!strcmp(t,this->title))
        {
            showBookData();
            counter++;
        }
        fin.read((char*)this,sizeof(*this));
    }
    if(counter==0)
      cout<<"\nRecord not found";
  } 
  fin.close(); 
  
}
//Delete a record from a file
void Book::deleteBook(char *t)
{
    ifstream fin;
    ofstream fout;
    fin.open("fil");
}
int main()
{
    Book b1,b2;
    // char str[]={"JavaScript"};
    // b1.searchBook(str);
    b1.storeBook();
    
   
    

    return 0;
}