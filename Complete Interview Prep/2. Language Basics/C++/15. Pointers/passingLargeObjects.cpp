#include <iostream>
#include <vector>
using namespace std;
void processVector(vector <int> *v){ 
    //if passed as that means without *, the value 1000 elements will be copied again, therefore we use pointer instead
    for(auto x: *v){  //used *v as we needed to dereference it to get elements
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    for(int i=0;i<1000;i++)
        v.push_back(i);
    processVector(&v);
    return 0;
}