#include <iostream>
using namespace std;
int main(){
    int x=5;
    bool res = (x==5)&&(x++);
    /*cout<<4&&4;//first number
    cout<<" "<<4&&5;//1st num
    cout<<" "<<4||5;//1st num
    cout<<" "<<4||5;//1st num
    cout<<" "<<!4;//0, all num other than 0 are true
    cout<<" "<<!-1;//same as above
    cout<<endl;*/
    cout<<res<<" "<<x<<endl;
    return 0;
}