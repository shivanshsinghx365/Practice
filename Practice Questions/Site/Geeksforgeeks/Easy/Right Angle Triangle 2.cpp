//https://practice.geeksforgeeks.org/problems/right-angle-triangle-2-1605689820/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void triangle(int s){
    //Write your code here
    for(int i=0;i<s;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                if(i==0){
                    cout<<"*";
                }
                else{
                    cout<<"* ";
                }
            }
            else if (i==s-1){
                cout<<"* ";
            }
            else if (j==i){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
	    triangle(s);
	}
}  // } Driver Code Ends
