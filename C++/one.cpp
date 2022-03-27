#include <iostream>

using namespace std;
class area{
    public:
    int l,b;
    area(){
        int area=0;
        cout<<area<<endl;
    }
    area(int l,int b){
        int area=l*b;
        cout<<area<<endl;
    }
    ~area(){
        cout<<"end"<<endl;
    }
};

int main() {
    area react;
    area last(2,3);
}