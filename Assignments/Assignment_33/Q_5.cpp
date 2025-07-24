// Define a class Matrix to represent a 3x3 order matrix. Provide appropriate methods and properties to the class. Also define following methods in the class. 1.Matrix add(Matrix) 2.Matrix sub(Matrix) 3.Matrix multiply(Matrix) 4.Matrix transpose() 5.bool is_singular()
#include<iostream>
using namespace std;
class Matrix
{
    private: 
       int A[3][3]; // Instance member variable
    public:
    void inputMatrix(int a[][3])
       {
        cout<<"Enter elements of Matrix 3x3 :";
        for(int i=0;i<=2;i++)
          for(int j=0;j<=2;j++)
              cin>>a[i][j];
       }
       void setMatrix(int a[][3])
       {
          for(int i=0;i<=2;i++)
            for(int j=0;j<=2;j++)
            {
               A[i][j]=a[i][j];
            }
       } 
       void printMatrix()
       {
        for(int i=0;i<=2;i++)
        {
           for(int j=0;j<=2;j++)
           { 
             
              cout<<A[i][j]<<" ";
           }
           cout<<endl;
        }
       }  
       Matrix add(Matrix m)
       {
           Matrix temp;
           for(int i=0;i<=2;i++)
              for(int j=0;j<=2;j++)
              {
                  temp.A[i][j]=A[i][j]+m.A[i][j];
              }
            return temp;      
       } 
       Matrix sub(Matrix m)
       {
           Matrix temp;
           for(int i=0;i<=2;i++)
              for(int j=0;j<=2;j++)
              {
                  temp.A[i][j]=A[i][j]-m.A[i][j];
              }
            return temp;      
       } 
       Matrix multiply(Matrix m)
       {
           Matrix temp;
           int sum,k,i,j;
           for(i=0;i<=2;i++)
              for(j=0;j<=2;j++)
              {
                for(sum=0,k=0;k<=2;k++)
                    sum=sum+A[i][k]*m.A[k][j];
              }
              temp.A[i][j]=sum;
            return temp;  
       }
       Matrix transpose()
       {
          Matrix temp;
          for(int i=0;i<=2;i++)
             for(int j=0;j<=2;j++)
                temp.A[i][j]=A[j][i];
          return temp;      
       }
       bool is_singular()
       {
          int D;
          D=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);

          return D==0;
       }
};

int main(){
    int a1[3][3]={0},a2[3][3]={9,8,7,6,5,4,3,2,1};
    Matrix M1,M2,M3,M4,M5,M6,M7;
    M1.inputMatrix(a1);
    M1.setMatrix(a1);
    cout<<"Matrix a1:\n";
    M1.printMatrix();

    cout<<endl<<endl;

    cout<<"Matrix a2:\n";
    M2.setMatrix(a2);
    M2.printMatrix();

     cout<<endl<<endl;
    cout<<"Addition of two 3x3 Matrix = \n";
    M3=M1.add(M2);
    M3.printMatrix();

     cout<<endl<<endl;
    cout<<"Subtraction of two 3x3 Matrix = \n";
    M4=M1.sub(M2);
    M4.printMatrix();

    cout<<endl<<endl;
    cout<<"Multiplication of two 3x3 Matrix = \n";
    M5=M1.multiply(M2);
    M5.printMatrix();
    
    cout<<endl<<endl;

    cout<<"Transpose of 3x3 Matrix = \n";
    M6=M1.transpose();
    M6.printMatrix();

    cout<<"Singular Matrix or Not = \n";
    if(M1.is_singular()==true)
      cout<<"Singular Matrix";
    else
       cout<<"Non Singular Matrix";  
    
    
    return 0;
}