#include <iostream>
using namespace std;
int main(){
    int x=10,z=20; //x=10 and z=20
    int &y=x; //y=x=10
    //NOTE : REFERENCE ARE ASSIGNED ONLY ONCE & once a reference has been assigned it CAN NOT BE CHANGED
    y=z;     //y=20 and x=20
    y=y+5;   //y=25 and x=25
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}

//OUTPUT
//25 25 20