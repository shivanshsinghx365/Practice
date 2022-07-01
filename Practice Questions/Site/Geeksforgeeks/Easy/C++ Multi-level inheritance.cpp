//https://practice.geeksforgeeks.org/problems/c-multi-level-inheritance/0/?track=placement100-oops-cpp&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

class student
{
    protected :
        int roll_number;
        
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        
        void display_number()
        {
            cout<<roll_number<<endl;
        }
};


 // } Driver Code Ends
//User function Template for C++
class test: public student 
{
    public:
    float marks[5];
    int rln=roll_number;
    // Add set_marks() method here.
    int total = 0;
    int avg = 0;
    void set_marks(float arr[5]){
        int i=0;
        for(i;i<5;i++){
            marks[i]=arr[i];
        }
        int j=0;
        for(j=0;j<5;j++){
            total+=marks[j];
        }
        avg = total/5;
    }
};

class result: public test
{
    public:
    // Add display() method here.
    void display(){
        cout<<rln+1<<" "<<total<<" "<<avg<<endl;
    }
    
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	result student1;
	    int n;
	    cin>>n;
	    student1.set_number(n);
	    float temp[5];
	    int i;
	
	    for(i = 0; i < 5; i++)
	        cin>>temp[i];
	
	    student1.set_marks(temp);
	    student1.display();
	}

	return 0;    
}
  // } Driver Code Ends
