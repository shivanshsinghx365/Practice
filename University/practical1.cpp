//WAP to find print A-z using loop
//WAP to print 10-1 using loop

#include <iostream>
using namespace std;
int main(){
    for (char ch='A';ch<='Z';ch++){
        cout<<ch<<' ';
    }
    cout<<endl;
    for (int i=10;i>=1;i--){
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}