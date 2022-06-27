#include <iostream>
using namespace std;

int main(){
    double x,y;
    cin>>x>>y;

    try{
        if(x==0.0){ //these are 0.0 and not 0, bcz x and y are doubles and not int
            throw 0; //throws int
        }
        if(y==0.0){
            throw string("Y is zero"); //throws string
            //you need to write keyword string, otherwise it wont be taken as a string
        }
        if (x+y<0.0){
            throw x+y;  //throws double
        }
    }

    // Note once a catch block is executed other catch blocks are not executed and only the matching catch block is executed
    catch(int x){
        cout<<x<<endl;
    }
    catch(string s){
        cout<<s<<endl;
    }
    catch (...){ //catches all datatype, usually put at the end
    //so that if a datatype is thrown that does not match any catch blocks, it will be catched by this ... catch block (here it catches double x+y)
        cout<<"x+y is less than 0\n";
    }


    return 0;
}