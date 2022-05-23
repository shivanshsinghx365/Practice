//goto makes it harder to keep track of the flow of the program
//that's why goto statements are not recommended to be utilized
//we can always replace goto with a break or continue

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n%2==0)
        goto label1; //jumps to label1
    else
        goto label2;

    //labels can be defined anywhere in the program before or after goto
    //& using goto we can take the control to the label, wherever it is
    //Once we reach a label everything after it is executed
    label1: //labels are defined using colons
        cout<<"Even"<<endl;
        return 0; //prevent further statements from executing just like break in switch,
        //here we can't use break bcz it is not a loop
        //if return 0 wasn't there and number was even both even and odd would have been printed
    label2:
        cout<<"Odd"<<endl;
        return 0;
    return 0;
}