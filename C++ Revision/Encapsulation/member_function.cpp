#include<iostream>
using namespace std;
struct Book
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
    Book b1,b2,b3;
    b1.inputData();
    b2.inputData();
    b3.inputData();
    b1.displayData();
    b2.displayData();
    b3.displayData();
    return 0;
}
