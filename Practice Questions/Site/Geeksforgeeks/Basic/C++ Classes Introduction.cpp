//https://practice.geeksforgeeks.org/problems/c-classes-introduction/0/?track=placement100-oops-cpp&batchId=238#

// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// CollegeCourse Class 
class CollegeCourse
{
    public:
    //your code here
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;
    void set_CourseId( string CID){
        courseID=CID;
    }
    void set_Grade(char g){
        grade =g;
    }
    void set_Credit(int cr){
        credits=cr;
    }
    int calculateGradePoints(char g){
        switch(g){
            case 'A':
                gradePoints = 10;
                break;
            case 'B':
                gradePoints = 9;
                break;
            case 'C':
                gradePoints = 8;
                break;
            case 'D':
                gradePoints = 7;
                break;
            case 'E':
                gradePoints = 6;
                break;
            case 'F':
                gradePoints = 5;
                break;
            case 'a':
                gradePoints = 10;
                break;
            case 'b':
                gradePoints = 9;
                break;
            case 'c':
                gradePoints = 8;
                break;
            case 'd':
                gradePoints = 7;
                break;
            case 'e':
                gradePoints = 6;
                break;
            case 'f':
                gradePoints = 5;
                break;
            
        }
        return gradePoints;
    }
    float calculateHonorPoints(int gp,int cr){
        honorPoints = gp*cr;
        return honorPoints;
    }
    void display(){
        cout<<gradePoints<<" "<<honorPoints<<endl;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    CollegeCourse cc;
    string courseId;
    int gp;
    char grade;
    int credits;
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;
}
  // } Driver Code Ends
