#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    try{
        throw a*a;
    }
    catch(int b){
        cout<<"Square is = "<<b<<endl;
    }
}