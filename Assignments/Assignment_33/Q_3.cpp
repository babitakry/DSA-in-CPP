/*Define a class TestResult with properties roll_no, right, wrong, net_score.Also define class properties right_weightage ,wrong_weightage. Provide methods to set and get all the properties. */
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
