// Define a function to sort an array of intergers in ascending or descending order depending on bool type argument(true for ascending and false for desending).Use default argument to implement it.
#include <iostream>
#include <stdio.h>
using namespace std;
void sort(int [], int ,bool);
int main()
{
    int n,i;
    bool x=false;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter numbers in array according to its size:";
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];

    
    cout << "\n\n";
    sort(a, n, x);
}

void sort(int a[], int n,bool x)
{
    int i, r, temp;
    cout << "Before Sorting : ";
    for (i = 0; i <= n - 1; i++)
        cout << " " << a[i];

    if (x==true)
    {
        cout << "\n\n"
             << "After Sorting : ";
        for (r = 1; r <= n-1; r++)
        {
            for (i = 0; i <= n - r -1 ; i++)
            {

                if (a[i] > a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
           
        }
        for(i=0;i<=n-1;i++)
           cout<<" "<<a[i];
    }
    if(x==false)
    {
        cout << "\n\n"
             << "After Sorting : ";
        for (r = 1; r <= n-1; r++)
        {
            for (i = 0; i <= n - r-1; i++)
            {
                if (a[i] < a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
            
        }
        for(i=0;i<=n-1;i++)
          cout << " " << a[i];
    }
}