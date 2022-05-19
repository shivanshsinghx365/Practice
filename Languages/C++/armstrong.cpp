//WAP to check if number is armstrong
#include <iostream>
using namespace std;
int main(){
    int n,t,i;
    cout<<"Enter a element : ";
    cin>>n;
    t=n;
    int s=0;
    while(t>0){
        i=t%10;
        t=t/10;
        s+=(i*i*i);
    }
    if (n==s){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not armstrong"<<endl;
    }
}