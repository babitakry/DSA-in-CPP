// Define a class matrix to represent 3X3 matrix.Provide appropriate instance methods. Also define operator +,operator -,operator * to perform Addition,Substraction and Multiplication operations respectively.
#include<iostream>
using namespace std;
class Matrix
{
   private:
      int M[3][3];
   public:
      void input_Matrix();
      void show_Matrix();
      Matrix operator+(Matrix);
      Matrix operator-(Matrix);
      Matrix operator*(Matrix);
       
};
void Matrix::input_Matrix()
{
    int i,j;
    cout<<"Enter 9 numbers (row wise) for the matrix :";
    for(i=0;i<3;i++)
    { 
      for(j=0;j<3;j++)
          cin>>M[i][j];
    }
         
}
void Matrix::show_Matrix()
{
    
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        cout<<M[i][j]<<" ";
      cout<<endl;  
    }
}
Matrix Matrix::operator+(Matrix m)
{
    Matrix temp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
           temp.M[i][j]=M[i][j]+m.M[i][j];
    }
    return temp;
}
Matrix Matrix::operator-(Matrix m)
{
    Matrix temp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
           temp.M[i][j]=M[i][j]-m.M[i][j];
    }
    return temp;
}
Matrix Matrix::operator*(Matrix m)
{
   Matrix temp;
   int s,i,j,k;
   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
        for(k=0,s=0;k<3;k++)
           s=s+M[i][k]*m.M[k][j];
        temp.M[i][j]=s;
     }
    
    return temp;
}
int main()
{
    Matrix m1,m2,m3,m4;
    m1.input_Matrix();
    m1.show_Matrix();
    m2.input_Matrix();
    m2.show_Matrix();
    m3=m1+m2;
    cout<<"Sum of Matrix = "<<endl;
    m3.show_Matrix();
    m3=m1-m2;
    cout<<"Subtraction of Matrix = "<<endl;
    m3.show_Matrix();
    m4=m1*m2;
    cout<<"Multiplication of Matrix = "<<endl;
    m4.show_Matrix();
    
}
