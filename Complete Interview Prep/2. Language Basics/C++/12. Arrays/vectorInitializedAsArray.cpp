#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int>v{10,20,30,40,50};//the int we write in <> brackets is datatype of individual elements, it could have also been a char, double,etc also
    // note we can't give auto in this bracket
    //note that vectors do not have = sign while assigning values
    //this creates vector of size 5 with elements 10,20,30,40 and 50
    for (auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
}

/*
OUTPUT:
10 20 30 40 50 
*/