//https://www.codechef.com/START49D/problems/MAXTASTE

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x = a>b?a:b;
	    int y = c>d?c:d;
	    cout<<x+y<<endl;
	}
	
	return 0;
}

