#include<iostream>
#include<fstream>
using namespace std;
void writing()
{
    
    ofstream fout;
    fout.open("file1.txt",ios::out);
    char str[]="MySirG Education Services";
    fout<<str;
    fout.close();
}
void reading()
{
    ifstream fin;
    char ch;
    fin.open("file1.txt",ios::in);
    if(!fin)
       cout<<"File not found";
    else
    {
        int pos;
        pos=fin.tellg();
        cout<<pos<<endl;
        ch=fin.get();
        while(!fin.eof())  //using end of file (eof) loop is going on
        {
            cout<<ch<<" "<<fin.tellg()<<endl;
            ch=fin.get();
        }
    } 
    fin.close(); 
}
void append(char data[])
{
    ofstream fout;
    fout.open("file1.txt",ios::app);
    fout<<data;
    fout.close();
}
int main()
{
    char str[]={" File Handling in C++"};
    append(str);
    reading();
    
    cout<<endl;
    return 0;
}