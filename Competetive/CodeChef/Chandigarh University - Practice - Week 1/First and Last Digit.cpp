//https://www.codechef.com/CU1PP0001/problems/FLOW004
#include <iostream>
using namespace std;
int main(){
    int t,f,l,n,s;
    cin>>t;
    while(t--){
        cin>>n;
        l=n%10;
        while(n>=10){
            n=n/10;
        }
        f=n;
        s=f+l;
        cout<<s<<endl;
    }
}
