/* Consider the following class Array 
   {
    private:
      int *p;
      int size;
    public:
      //methods;
   };
    Define operator = to perform deep copy of Array objects.*/
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
     dout<<A.p[i]<<" ";
}
int main()
{
  int n1,n2;
  cout<<"Enter size of an Array : ";
  cin>>n1;
  Array a1(n1);
  cout<<"Enter "<<n1<<" elements in array : "<<endl;
  cin>>a1;
  cout<<a1;
  return 0;
}
