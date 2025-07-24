#include<iostream>
#include<string.h>
using namespace std;
char* strupr(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
           s[i]=s[i]-32;
    }
    return s;
}
void f1()
{
    int age,vote;
    char nationality[20];
    try
    {
       cout<<"Enter your age :";
       cin>>age;
       if(age<18)
          throw 1;
       cout<<"Enter your nationality: ";
       cin.ignore();
       cin.getline(nationality,20);
       if(strcmp(strupr(nationality),"INDIAN")) 
           throw nationality;

       cout<<"\nVote for your favourite actor:";
       cout<<"\n1. Amir Khan";
       cout<<"\n2. Shahrukh Khan";
       cout<<"\n3. Akshay Kumar";
       cout<<"\n4. Shiddarth Malhotra"<<endl;
       cin>>vote;
       if(vote<1 || vote>4)
         throw 2.0;
       cout<<"\nThank you for your Vote"<<endl;    
    }
    catch(int e)
    {
        cout<<"You are not Eligible to cast your vote"<<endl;
    }
    // catch(char* n)
    // {
    //     cout<<"You have to be Indian to caste vote"<<endl;
    // }
    // catch(...)
    // {
    //     cout<<"Invalid Vote"<<endl;
    // }
    cout<<"END";
}
int main()
{
    f1();
    return 0;
}