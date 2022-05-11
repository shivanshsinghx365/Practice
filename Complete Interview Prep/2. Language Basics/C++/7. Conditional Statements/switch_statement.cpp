//capability wise if else and switch statement are similar
//Switch statements are multiway branching
#include <iostream>
using namespace std;
int main(){
    int x_pos=0,y_pos=0;
    char move;
    move='L';
    switch (move)
    {
    case 'L':
        x_pos--;
        break; // you need break since if you dont have break if one condition holds true
        //every case after it will also be automatically executed
    case 'R':
        x_pos++;
        break;
    case 'U':
        y_pos++;
        break;
    case 'D':
        y_pos--;
        break;
    default: //default is optional but you can put it to show some output if no option matches
        cout<<"Invalid Key"<<endl;
    }
    cout<<"x = "<<x_pos<<"  "<<"y = "<<y_pos<<endl;
    return 0;
}