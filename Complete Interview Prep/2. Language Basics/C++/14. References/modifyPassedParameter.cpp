#include <iostream>
using namespace std;
void swap(int &x, int &y){ //If we used x and y without ampersand our final answer would be un-swapped 10 and 15
//Because by default parameters are passed by value in c and c++
//ampersand allows parameters to be passed by reference instead
    int temp = x;
    x=y;
    y=temp;
}
int main(){
    int x=10,y=15;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}