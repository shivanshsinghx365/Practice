//https://www.codechef.com/submit/ON_OFF

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s,sq;
	    int n;
	    cin>>n;
	    cin>>s;
	    cin>>sq;
	    int z=0;
	    for(int i=0;i<n;i++){
	        if(s[i]!=sq[i]){
	            z++;
	        }
	    }
	    if(z%2==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}

