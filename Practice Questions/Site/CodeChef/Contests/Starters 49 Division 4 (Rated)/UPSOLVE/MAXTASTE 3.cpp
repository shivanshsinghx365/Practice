//https://www.codechef.com/START49D/problems/MAXTASTE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    cout<<max(a,b)+max(c,d)<<endl;
	}
	
	return 0;
}
