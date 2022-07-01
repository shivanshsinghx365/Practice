//https://practice.geeksforgeeks.org/problems/the-size-of/0/?track=module-1-basics-and-control-structures&batchId=113#

// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void dataTypes(int, float, double, long long, string);


 // } Driver Code Ends
//User function Template for C++

// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d){
    float z = b/c;
    double y = b/a;
    int x = c/a;
    long long w=l+(c/a);
    cout<<sizeof(z)<<" ";
    cout<<sizeof(y)<<" ";
    cout<<sizeof(x)<<" ";
    cout<<sizeof(w)<<endl;
    cout<<sizeof(d)<<" "<<sizeof(d[3])<<endl;
    
}

// { Driver Code Starts.

// Driver Code
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
}  // } Driver Code Ends
