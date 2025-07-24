// In Q-4, Defien a friend operator + to concatenate two Array objects;
#include<iostream>
using namespace std;
class Array
{
    private:
      int *p;
      int size;
    public:
      Array(int s)  //constructor
      {
        size=s;
        p=new int[s];
      } 
      friend istream& operator>>(istream&,Array&); 
      friend ostream& operator<<(ostream&,Array);
      friend Array operator+(Array,Array);
      Array(Array &A)  //Deep Copy always done by programer and Shallow copy done by compiler.
      {
        size=A.size;
        p=new int[size];
        for(int i=0;i<size;i++)
           p[i]=A.p[i];
      }
};
istream& operator>>(istream &din,Array &A)
{
    for(int i=0;i<A.size;i++)
      din>>A.p[i];

}
ostream& operator<<(ostream &dout,Array A)
{
   for(int i=0;i<A.size;i++)
     dout<<A.p[i];
}
Array operator+(Array A,Array B)
{
    Array temp(A.size+B.size);
    int i,j,k;
    for(i=0,j=0,k=0;i<temp.size;i++)
    {
        if(j<A.size)
        {
            temp.p[i]=A.p[j];
            j++;
        }
        else
        {
            temp.p[i]=A.p[k];
            k++;
        }
    }
    return temp;

}
int main()
{
  int n1,n2;
  cout<<"Enter size of an Array : ";
  cin>>n1>>n2;
  Array a1(n1),a2(n2);
  cout<<"Enter "<<n1<<" elements in array : "<<endl;
  cin>>a1;
  a2=a1;  //copy
  cout<<a2;
  

}
