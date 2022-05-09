#include <iostream>
using namespace std;
class vehicle{
    public:
    int tyre=4;
};
class car: public vehicle{
    public:
    int door=2;
};
int main(){
    vehicle vh;
    cout<<vh.tyre<<endl;
    car cr;
    cout<<cr.door<<" "<<cr.tyre<<endl;
    return 0;
}