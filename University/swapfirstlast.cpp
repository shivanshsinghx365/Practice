//Experiment 1.2
//WAP to swap first and last of any number i/p: 12345 o/p: 52341
//aim
//code
//output
//explanation(3-4 lines)
#include <iostream>
using namespace std;
int main(){
    int first,remain,k,last,m,num,z;
    int i=0;
    cout<<"Enter : ";
    cin>>m;
    num=m;
    while (m>0){
        i=i+1;
        m=(int)(m/10);
    }
    last=num%10;
    k=1;
    while(i>1){
        k*=10;
        i--;
    }
    first=num/k;
    remain=(num%k)-last;
    z=remain+first;
    z+=(last*k);
    cout<<"Output :"<<z<<endl;
}
//cin and cout are objects