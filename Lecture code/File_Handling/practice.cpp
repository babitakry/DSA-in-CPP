#include<fstream>
#include<iostream>
using namespace std;

void writing()
{
    ofstream fout; //child class of ostream which contains <<(insertion operator) as a member 
    fout.open("MyFile.dat",ios::out);
    fout<<"hello";
    fout.close();
}
void reading()
{
    ifstream fin;
    char ch;
    fin.open("MyFile.dat",ios::in);
    ch=fin.get();
    //fin>>ch; Not used reason is below given
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
       // fin>>ch; //fin take tab ,newline as a dilimiters.
          
    }
    fin.close();
}
void append(char data[])
{
    ofstream fout;
    fout.open("Myfile.dat",ios::app|ios::binary);
    fout<<data;
    fout.close();
}

int main()
{
   // writing();
   char str[]={" Students"};
   append(str); 
   reading();
   return 0;
}