#include <iostream>
using namespace std;
int main(){
    cout<<"Begin ";
    for (int i=0;i<10;i++){
        if (i==5)
        //return is even stronger than break
        return 0; //when return executed the entire program ends not just a loop
        //so output would have been Begin 0 1 2 3 4
        //then program ends
        cout<<i<<" ";
    }
    cout<<"End"<<endl;
}