#include <iostream>
#include <string.h>
using namespace std;
class petrol{
    public:
    int milage=100,speed=100;
    int door=2;
};
class car{
    protected:
    int tyre_no=4;
    int door=4;
};
class nano:public petrol,car{  //another example child is derived from mom & father by multiple inheritance
    public:
    string size="small";
    void details(){
        cout<<"speed is "<<speed<<endl;
        cout<<"tyre is "<<tyre_no<<endl;
        cout<<"size is "<<size<<endl;
        cout<<"doors are "<<car::door<<endl;
    }
};
int main(){
    nano n1;
    cout<<"milage is "<<n1.milage<<endl;
    n1.details();
}