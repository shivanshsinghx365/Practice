#include <iostream>
#include <exception>
using namespace std;

class myException : public exception{
    virtual const char *what(){
        return "Exception Occurred \n";
    }
};

int main(){
    try{
        throw myException();
    }
    catch(exception &e){
        cout<<e.what();
    }
    return 0;
}