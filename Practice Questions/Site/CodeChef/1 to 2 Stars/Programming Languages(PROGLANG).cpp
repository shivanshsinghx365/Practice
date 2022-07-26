//https://www.codechef.com/submit/PROGLANG

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    if ((a==c && b==d) || (a==d && b==c)){
	        cout<<1<<endl;
	    }
	    else if ((a==e && b==f) || (a==f && b==e)){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
