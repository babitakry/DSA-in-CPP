#include<iostream>
#include<fstream>
using namespace std;
void reading()
{
    ifstream fin;
    fin.open("abc.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get(); 
    cout<<"\n"<<(char)fin.get(); 
    cout<<"\n"<<fin.tellg();
    fin.seekg(0);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get(); 
    fin.seekg(6);
    cout<<"\n\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<"\n\n"<<fin.tellg();
    fin.seekg(-2,ios_base::end);
    cout<<"\n\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();

}
void writing()
{
    ofstream fout;
    fout.open("abc.txt",ios::ate | ios::app);
    cout<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close();
}
int main()
{
    writing();
    return 0;
}