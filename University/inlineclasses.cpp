#include <iostream>
using namespace std;
class number{
    public:
    int a;
    int enter(){
        cout<<"Enter number : ";
        cin>>a;
        return a;
    }
    inline int square(int a){
        return a*a;
    }
};
int main(){
    number one;
    int i = one.enter();
    int sq = one.square(i);
    cout<<"square : "<<sq<<endl;
}