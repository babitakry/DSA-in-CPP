#include<iostream>
#include<fstream>
using namespace std;
void tellp_pointer()
{
    ofstream fout;
    char ch;
    fout.open("abc.txt",ios::app);
    int pos;
    pos=fout.tellp();
    cout<<pos<<" ";
    fout<<"MySirG";
    pos=fout.tellp();
    cout<<pos;
    fout.close();

}
void tellg_pointer()
{
    ifstream fin;
    char ch;
    fin.open("abc.txt",ios::in);
    int pos;
    pos=fin.tellg();
    cout<<pos<<" ";
    fin>>ch;
    pos=fin.tellg();
    cout<<pos<<" ";
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
}
int main()
{
    tellg_pointer();
    cout<<endl;
    tellp_pointer();
    return 0;
}
