#include <iostream>
using namespace std;

union test{
    int x;
    char y;
    double z;
};

int main(){
    test t; 

    cout<<sizeof(t)<<endl;   //8 bcz double has max size of 8

    return 0;
}

/*
OUTPUT:
8
*/