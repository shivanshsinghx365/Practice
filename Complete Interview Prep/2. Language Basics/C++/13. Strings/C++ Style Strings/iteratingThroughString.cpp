#include <iostream>
using namespace std;
int main(){
    string str = "geeksforgeeks";
    cout<<"Iterating via indexing = ";
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<"Using for each loop = ";
    for(char x : str){  //for each loop
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}