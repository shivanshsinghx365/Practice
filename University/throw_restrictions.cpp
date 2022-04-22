#include <iostream>
using namespace std;
void calc(int input){
    try{
        if (input==0){
            throw 0;
        }
        else if (input==1){
            throw '1';
        }
        else {
            throw "Unknown";
        }
    }
    catch(int a){
        cout<<"zero\n";
    }
    catch(char b){
        cout<<"one\n";
    }
    catch(...){
        cout<<"unknown Error\n";
    }
}
int main(){
    int input;
    cout<<"Enter your number : ";
    cin>>input;
    calc(input);
}