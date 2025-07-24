//store Object Data in a file
#include<fstream>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Book
{
    private:
      int bookid;
      char title[20];
      float price;
    public:
       Book()
       {
          bookid=0;
          strcpy(title,"No title");
          price=0;
       }
       void getBookData()
       {
        cout<<"Enter bookid, title and price of a book :";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,19);
        cin>>price;
       }
       void showBookData()
       {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price<<endl;
       }
       
       int storeBook();
       void viewAllBooks();
       void searchBook(char*);
       void deleteBook(char*);
       void updateBook(char*);
};
//search
void Book::searchBook(char *t)
{
   int counter=0;
   ifstream fin;
   fin.open("file2.dat",ios::in | ios::binary);
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
      fin.close();
   }   
}
//view
void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("file2.dat",ios::in | ios::binary);
    if(!fin)
       cout<<"\nFile not found";
    else
    {
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
          showBookData();
          fin.read((char*)this,sizeof(*this));
       }
    } 
    fin.close();  
    
}
//store
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
    fout.open("file2.dat",ios::app | ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    return (1);
    }
    
}
//Delete a record in a file
void Book::deleteBook(char *t)
{
   ifstream fin;
   ofstream fout;
   fin.open("file2.dat",ios::in | ios::binary);
   if(!fin)
      cout<<"\nFile not found";
   else
   {
      getch();
      fout.open("tempfile.dat",ios::out | ios::binary);
      fin.read((char*)this,sizeof(*this)); //this mtlab caller object of point kerna
      while(!fin.eof())
      {
         if(strcmp(t,this->title))
         {
            fout.write((char*)this,sizeof(*this));
         }
         fin.read((char*)this,sizeof(*this));
      }
      fin.close(); //save in hard disk
      fout.close(); //save in hard disk
      getch();
      remove("file2.dat");
      getch();
      rename("tempfile.dat","file2.dat"); //declaration of rename function and remove function present in STDIO.H header file
   }   
}
void Book::updateBook(char *t)
{
    fstream file;
    file.open("file2.dat",ios::in | ios::out | ios::ate | ios::binary);
    file.seekg(0); // Now point 0 index 
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
      if(!strcmp(t,this->title))
      {
         getBookData();
         file.seekp(file.tellp()-sizeof(*this));
         file.write((char*)this,sizeof(*this));
      }
      file.read((char*)this,sizeof(*this));
    } 
    file.close();
}
int menu()
{
   int choice;
   cout<<"\n Book Management : ";
   cout<<"\n 1. Insert(Store) Book record";
   cout<<"\n 2. View all Book record";
   cout<<"\n 3. Search Book record";
   cout<<"\n 4. Delete Book record";
   cout<<"\n 5. Update Book record";
   cout<<"\n 6. Exit";
   cout<<"\n\n\n Enter your choice";
   cin>>choice;
   return choice;
   
}
int main()
{
   char title[20];
   Book b1;
   while(1)
   {
   system("cls");
   switch(menu())
   {
      case 1:
         b1.getBookData();
         b1.storeBook();
         cout<<"\n Record inserted";
         break;
      case 2:
         b1.viewAllBooks();
         break;
      case 3:
         cout<<"\n Enter title of Book to search";
         cin.ignore();
         cin.getline(title,19);
         b1.searchBook(title);
         break;
      case 4:
         cout<<"\n Enter book title to delete record";
         cin.ignore();
         cin.getline(title,19);
         b1.deleteBook(title);
         break;
      case 5:
         cout<<"\nEnter book title to update record";
         cin.ignore();
         cin.getline(title,19);
         b1.updateBook(title);
         break;
      case 6:
         cout<<"\n Thanku you for using this application";
         cout<<"\n Press any key to exit";
         getch();
         exit(0);
      default:
         cout<<"\n Invalid Choice";                  
   }
   getch();
}
   return 0;
}