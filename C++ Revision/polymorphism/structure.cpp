#include<iostream>
#include<stdio.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book inputData()
{
    struct Book b;
    cout<<"Enter bookid, title, and price : ";
    cin>>b.bookid;
    cin.ignore(); // fflush(stdin);
    cin.getline(b.title,20);//fgets(title,20,stdin);
    cin>>b.price;
    return b;
}
void displayData(struct Book b)
{
   cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}
int main()
{
    struct Book b1,b2,b3;
    b1=inputData();
    b2=inputData();
    b3=inputData();
    displayData(b1);
    displayData(b2);
    displayData(b3);
}