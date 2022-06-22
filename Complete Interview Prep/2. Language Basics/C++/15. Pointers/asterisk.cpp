#include <iostream>
using namespace std;
int main(){
    //Value of an address
    int x=10;
    cout<<*(&x)<<endl; //* before an address or a pointer gives its value in other words it dereferences a given address
    //we could have also written *&x
}

//OUTPUT
//10