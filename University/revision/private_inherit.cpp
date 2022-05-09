#include <iostream>
using namespace std;
class parent{
    private:
    int x=7;
    public:
    void show(){
        cout<<x<<endl;
    }
    protected:
    void show1(){
        cout<<2*x<<endl;
    }
};
class child : private parent{
    public:
    void show2(){
        //cout<<2*x<<endl; won't work x was priate
        show1(); //protected again accessed by child
    }
    void show3(){
        show();//public accressed by child
    }

};
int main(){
    child obj;
    //obj.show(); //inaccessible since show is public turned private
    //obj.x; //inaccessible since x is private turned private
    obj.show2();// can be accessed public function of child
    obj.show3();// can be accessed public function of child
    //obj.show1();//can't be accessed since was already protected converted to private
    return 0;
}