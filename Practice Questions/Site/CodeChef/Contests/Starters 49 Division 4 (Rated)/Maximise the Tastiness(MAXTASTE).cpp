//https://www.codechef.com/START49D/problems/MAXTASTE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x[4];
	    x[0]=a+c;
	    x[1]=a+d;
	    x[2]=b+c;
	    x[3]=b+d;
	    int big=0;
	    for(int i=0;i<4;i++){
	        if(x[i]>big){
	            big=x[i];
	        }
	    }
	    cout<<big<<endl;
	}
	
	return 0;
}

