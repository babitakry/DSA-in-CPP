// Define a function to merge two arrays of the same size sorted in desending order.
#include <iostream>
using namespace std;
void merge(int a[], int b[], int size, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i <= size - 1 && j <= size - 1)
    {
        if (a[i] > b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;

        if (i == size)
        {
            while (j <= size - 1)
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }
        else{
            while(i<=size-1)
            {
                c[k]=a[i];
                k++;
                i++;
            }
        }
    }
    for(k=0;k<2*size;k++)
       cout<<c[k]<<" ";
}
int main()
{
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[10];
    cout<<"Merge Array:";
    merge(a,b,5,c);
    
}