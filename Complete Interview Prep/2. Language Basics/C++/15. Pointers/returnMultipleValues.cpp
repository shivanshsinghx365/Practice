#include <iostream>
using namespace std;
void getAddMul(int x,int y,int *mPtr, int*aPtr){
    *mPtr=x*y;
    *aPtr=x+y;
}
int main(){
    int x=10,y=20,a,m;
    getAddMul(x,y,&m,&a);
    cout<<"ADD = "<<a<<endl;   // 30
    cout<<"MUL = "<<m<<endl;   // 200
}

/*
OUTPUT:
ADD = 20
MUL = 300
*/