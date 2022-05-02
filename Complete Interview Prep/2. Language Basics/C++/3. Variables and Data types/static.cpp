#include <iostream>
using namespace std;
int main(){
    static int x;
    //static means the variable will stay during the entire life time of the program
    //These are by default initialized as Zero 0
    //if you have just main functions you will not see any difference from local but
    //if you have multiple functions & multiple function calls the difference can be seen
    cout<<x<<endl;
    return 0;
}