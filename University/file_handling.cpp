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
    
    fh.close();
    return 0;
}