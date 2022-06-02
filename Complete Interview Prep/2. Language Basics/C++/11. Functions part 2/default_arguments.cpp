#include <iostream>
using namespace std;
int add(int a,int b,int c=0,int d=0){  //we can't give auto here either since it gives error
    return a+b+c+d;
}
int main(){
    cout<<"sum of 2 number with 2 defaults : "<<add(10,20)<<endl; // c & d automatically taken 0
    cout<<"sum of 3 number with 1 defaults : "<<add(10,20,30)<<endl;// d is automatically taken 0
    cout<<"sum of 4 number with no defaults : "<<add(10,20,30,40)<<endl;// everything is provided so nothing is taken as 0
}

/*
Output
sum of 2 number with 2 defaults : 30
sum of 3 number with 1 defaults : 60
sum of 4 number with no defaults : 100
*/