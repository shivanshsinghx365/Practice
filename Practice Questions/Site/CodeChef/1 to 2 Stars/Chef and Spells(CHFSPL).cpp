//https://www.codechef.com/submit/CHFSPL

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int l = (a<b)?(a<c?a:c):(b<c?b:c);
        cout<<(a+b+c-l)<<endl;
    }
	return 0;
}
