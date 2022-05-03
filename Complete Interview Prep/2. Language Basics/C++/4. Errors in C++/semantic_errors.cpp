#include <iostream>
using namespace std;
int main(){
    int x=10,y=20,z=30;
    x+y=z; //Gives semantic error as sum of 2 variables can not be assigned value of another variable
    //but vice versa can be done, eg: z=x+y can be done and not x+y=z
    //lvalue required error
    //anything on left must be a storage space for variables or else you will get error
    return 0;
}