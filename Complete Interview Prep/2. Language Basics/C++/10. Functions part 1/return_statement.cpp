#include <iostream>
using namespace std;
int myMax(int a,int b){
    if (a>b)
        return a;
    return b;
}
int main(){
    cout<<myMax(10,20)<<"  "<<myMax(20,10)<<endl;
    return 0;
}