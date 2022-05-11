#include <iostream>
using namespace std;
int main(){
    int x=7;
    if (x>10)
        cout<<"Greater than 10\n";
    else
        if (x>5)
            cout<<"Greater than 5\n";
        else
            cout<<"Smaller than or equal to 5\n";
}