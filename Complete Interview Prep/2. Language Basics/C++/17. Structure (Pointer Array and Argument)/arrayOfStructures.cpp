#include <iostream>

using namespace std;

struct point{
    int x;
    int y;
};

int main(){
    point arr[5];  //creates an array of 5 elements, each element is of the structure type
    //syntax for creating an array of structure objects is same as arrays of general data types

    for (int i=0;i<5;i++){
        arr[i].x = i;
        arr[i].y = i*10;
    }

    for (int i=0;i<5;i++){
        cout<<arr[i].x<<"  "<<arr[i].y<<endl;
    }

    return 0;
}

/*
OUTPUT
0  0
1  10
2  20
3  30
4  40
*/