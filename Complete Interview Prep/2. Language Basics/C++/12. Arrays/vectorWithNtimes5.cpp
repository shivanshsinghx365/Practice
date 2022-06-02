#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n=10;
    vector<int>v(n,5); //Vector of size n with each element 5

    for (auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

/*
OUTPUT:
5 5 5 5 5 5 5 5 5 5
*/