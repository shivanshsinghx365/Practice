#include <iostream>
using namespace std;
inline int square(int a){
    return a*a;
}
inline int cube(int a){
    return a*a*a;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Square of n is : "<<square(n);
    cout<<"\nCube of n is : "<<cube(n)<<endl;
}