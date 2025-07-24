/* Write a driver function main() to use TestResult class (Question 3).Create an array to 5 TestResult objects, set values to all the objects and display the results in sorted order(by net_score).*/
#include<iostream>
using namespace std;
class TestResult 
{
      private:
        int roll_no,right,wrong,net_score;  // instance member variables
        static int right_weightage,wrong_weightage;  //static member variables | class variable

      public:
        void setRollNo(int r){ roll_no=r;} // instance member function | instance method
        void setRight(int r){ right=r;}    // instance member function | instance method
        void setWrong(int w){ wrong=w;}    // instance member function | instance method 
        void setNet_Score(int n){ net_score=n;}  // instance member function | instance method
        int getRollNo(){ return roll_no;}        // instance member function | instance method
        int getRight(){ return right;}           // instance member function | instance method
        int getWrong(){ return wrong;}           // instance member function | instance method
        int getNet_Score(){ return net_score;}   // instance member function | instance method
        static void setRightWeightage(int w){ right_weightage=w;} //static member function | static method
        static void setWrongWeightage(int w){ wrong_weightage=w;} //static member function | static method
        static int getRightweightage(){ return right_weightage;}  //static member function | static method
        static int getWrongweightage(){ return wrong_weightage;}  //static member function | static method

};
int TestResult::right_weightage=3;  // declaration of static member variable
int TestResult::wrong_weightage=1;  // declaration of static member variable

void setTestResult(TestResult tr,int a,int b,int c)
{
     tr.setRollNo(a);
     tr.setRight(b);
     tr.setWrong(c);
     tr.setNet_Score(b*tr.getRightweightage()-c*tr.getWrongweightage());
}
void printTestResult(TestResult tr)
{
    cout<<"\n"<<tr.getRollNo()<<" "<<tr.getRight()<<" "<<tr.getWrong()<<" "<<tr.getNet_Score();
}
void sortByNetScore(TestResult result[],int size)
{
    int i,r;
    TestResult temp;
    for(r=1;r<=size-1;r++)
      for(i=0;i<=size-1-r;i++)
      {
        if(result[i].getNet_Score()>result[i+1].getNet_Score())
        temp=result[i];
        result[i]=result[i+1];
        result[i+1]=temp;
      }
}
int main()
{
    TestResult result[5];
    setTestResult(result[0],100,80,20);
    setTestResult(result[1],101,70,10);
    setTestResult(result[2],102,90,0);
    setTestResult(result[3],103,60,15);
    setTestResult(result[4],104,50,12);
    sortByNetScore(result,5);
    for(int i=0;i<=4;i++)
        printTestResult(result[i]);   
        
    cout<<endl;
    return 0;

}