#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v= {10,20,30,40};
    for(auto x : v){    //Does not change original vector because values were passes & not reference
        x=x+5;
    }
    for(auto x : v){
        cout<<x<<" ";  //10 20 30 40
    }
    cout<<endl;
    for(auto &x : v){  //Changes original vector because its elements were passed as references
        x=x+5;
    }
    for(auto x : v){
        cout<<x<<" ";  // 15 25 35 45
    }
    cout<<endl;
}