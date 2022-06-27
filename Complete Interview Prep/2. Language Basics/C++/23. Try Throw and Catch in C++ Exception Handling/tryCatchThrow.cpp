#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y ;
    try{
        if(y==0){
            throw 0;
        }
        cout<<"Result is :"<<x/y<<endl; //this gives int bcz both x & y are int
    }
    catch(int x){
        cout<<"division by zero"<<endl;
    }
    return 0;
}