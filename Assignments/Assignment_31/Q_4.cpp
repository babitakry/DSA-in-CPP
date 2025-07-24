// Define a function to calculate LCM of three numbers.
#include<iostream>
using namespace std;
int calculate_lcm(int a,int b,int c);
int main()
{
   int a=2,b=5,c=7;
   cout<<"LCM = "<<calculate_lcm(a,b,c);
   return 0;

}
int calculate_lcm(int a,int b,int c)
{
    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<=a*b*c;L++)
      if(L%a==0 && L%b==0 && L%c==0)
        return L;
}
