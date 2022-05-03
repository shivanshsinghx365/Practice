//reading

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream f;
    f.open("file.txt");
    char ch;
    while(1){
        f>>ch;
        if(f.eof()){
            break;
        }
        cout<<ch;
    }
    cout<<endl;
}