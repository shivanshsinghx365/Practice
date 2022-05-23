//WAP to find sum of 1st n natural numbers and generate error if n is negative
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if (n>=0){
        cout<<(n*(n+1))/2<<endl;
    }
    else{ //else and else if's are optional
        cout<<"Invalid input"<<endl;
    }
    return 0;
}