//WAP to print table of a given number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"---Table of "<<n<<"---"<<endl;
    for (int i=1;i<11;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}