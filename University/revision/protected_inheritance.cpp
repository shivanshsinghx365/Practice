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
class child:protected parent{
    public:
    void show3(){
        //cout<<x<<endl; // Can't be accessed since private remains private
        show(); //Can be accessed since public converts to protected
    }
    void show4(){
        show1(); //Can be accessed by child since protected remains protected
    }

};
/*Class is a user defined user type
its a blueprint for creating object instances*/
int main(){
    child obj;
    obj.show3();
    obj.show4();
    //obj.show(); //can't be accessed by object since protected, only child class can use it not its objects
    parent ob1;
    ob1.show(); //others are either protected or private
    return 0;
}