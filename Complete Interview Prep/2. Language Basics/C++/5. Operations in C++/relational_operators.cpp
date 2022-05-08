//Relational operators (<,>,<=,>=,==,!=)
//It is an operator that compares/tests some relation between 2 operands & gives a binary/boolean output(1 or 0)

#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    bool res=(x<y);
    cout<<res<<endl;//1
    res=(x>y);
    cout<<res<<endl;//0
    if (x<y){
        cout<<"x is smaller"<<endl;//printed
    }
    else{
        cout<<"y is smaller"<<endl;
    }
    return 0;
}