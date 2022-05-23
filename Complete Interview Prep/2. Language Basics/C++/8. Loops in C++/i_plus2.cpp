#include <iostream>
using namespace std;
int main(){
    for (int i=0;i<10;i=i+2) //first i is assigned, then checked, then execution takes place, finally modification occurs
    cout<<i<<endl;
    //also note last statement of for can be anything including print statement as well
    //also note that value of i can be changed inside for loop as well just like we do inside while loop
}

//OUTPUT
/*
0
2
4
6
8
*/