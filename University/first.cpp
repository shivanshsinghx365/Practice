//WAP to find the average of 5 subjects
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    double g;
    cout<<"Enter 1st marks :";
    cin>>a;
    cout<<"Enter 2nd marks :";
    cin>>b;
    cout<<"Enter 3rd marks :";
    cin>>c;
    cout<<"Enter 4th marks :";
    cin>>d;
    cout<<"Enter 5th marks :";
    cin>>e;
    g=(a+b+c+d+e)/5;
    cout<<"Answer = "<<g<<endl;
    return 0;
}