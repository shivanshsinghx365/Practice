#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &v){ //if it was passed as v and not &v in that case
//a new copy of these 1000 elements would have been made, this means more space would be needed, thats why
//to avoid such copying and unnecessary usage of cpu time and memory we make use of reference

//NOTE: references are capable of changing the original values as we saw in swapping
//So, to avoid that happening, we can put a const in void print(const vector<int> &v) to indicate 
//that we are just accessing the values and not modifying it
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;
}
int main(){
    vector<int> vec; //vec is a large vector
    for(int i=0;i<1000;i++){
        vec.push_back(i);
    }
    print(vec);
}