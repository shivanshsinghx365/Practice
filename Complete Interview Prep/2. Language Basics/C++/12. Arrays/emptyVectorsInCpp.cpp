#include <iostream>
#include <vector> //Before using a vector you must include it in preprocessor

using namespace std;

int main(){
    vector<int> v;   // Created an empty vector
    v.push_back(10); // Pushed elements into the vector
    v.push_back(20);
    v.push_back(30);
    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    //Using foreach loop
    //what this does is that we get hold of individual elements as we are traversing through the array
    for(auto x : v){ //here we could have written int x because we know the data type
    //but auto is better since we don't need to think what data type we used
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

/*
OUTPUT:
10 20 30 
10 20 30 
*/