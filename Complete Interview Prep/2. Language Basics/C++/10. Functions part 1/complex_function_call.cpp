#include <iostream>
using namespace std;
void func1(){
    cout<<"Inside func1"<<endl;
}
void func2(){
    cout<<"func2 begins"<<endl;
    func1();
    cout<<"func2 ends"<<endl;
}
int main(){
    cout<<"main begins"<<endl;
    func2();
    cout<<"main ends"<<endl;
    return 0;
}