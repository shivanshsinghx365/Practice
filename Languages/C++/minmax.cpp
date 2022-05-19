//Experiment 3.1
//WAP to find the largest & smallest of the three numbers using inline MAX & MIN functions
#include <iostream>
using namespace std;
inline int MAX(int a,int b, int c){
    return ((a>b)?(a>c?a:c):(b>c?b:c));
}
inline int MIN(int a,int b, int c){
    return ((a<b)?(a<c?a:c):(b<c?b:c));
}
int main(){
    int first,second,third;
    cout<<"Enter 1st number : ";
    cin>>first;
    cout<<"Enter 2nd number : ";
    cin>>second;
    cout<<"Enter 3rd number : ";
    cin>>third;
    cout<<"Maximum is : "<<MAX(first,second,third)<<endl;
    cout<<"Minimum is : "<<MIN(first,second,third)<<endl;
}