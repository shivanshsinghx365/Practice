//https://practice.geeksforgeeks.org/problems/average-1598856895/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

double posAverage(vector<int> nums) {
    // code here
    int n=0;
    int ss=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0){
            n+=1;
            ss+=nums[i];
        }
    }
    return (double)ss/n;
}


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        string str;
        getline(cin, str);
        vector<int> nums;
        istringstream ss(str);

        string num;
        while (ss >> num) {
            nums.push_back(stoi(num));
        }

        double avg = posAverage(nums);
        avg = ((int)(avg * 100)) / 100.0;
        printf("%.2f\n", avg);
    }

    return 0;
}  // } Driver Code Ends
