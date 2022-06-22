#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> v = {"geeksforgeeks practice","geeksforgeeks ide","geeksforgeeks write"}; //A big vector
    //here vector is of string type but if you create say a student object of your own, you can pass that inside as
    //vector<student> v;

    //By value
    for(const auto x:v){   //A big copy is made just to access element via for each loop
        cout<<x<<"      ";
    }
    cout<<endl;

    //By reference
    for(const auto &x : v){ //This does not create a copy as its a reference
    //const is optional BUT recommended here, since we are not modifying the vector
        cout<<x<<"      ";
    }
    cout<<endl;
}