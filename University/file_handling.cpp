#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream f;
    f.open("hello_world.txt");
    f<<"Hello from earth";
    f.close();

    ifstream fh;
    fh.open("hello_world.txt");
    int _=7; //identifier can also be just an underscore
    cout<<_<<endl;
    fh.close();
    return 0;
}