#include <iostream>
using namespace std;
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    int x=10;
    int y=20;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    swap(&x,&y);//we passed addresses, since swap took pointer input so we need to give it some address
    //We could have also passed the pointer that held the addresses of x & y
    cout<<"x = "<<x<<" y = "<<y<<endl;
    return 0;
}

/*
OUTPUT:
x = 10  y = 20
x = 20  y = 10
*/