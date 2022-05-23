#include <iostream>
using namespace std;
int main(){
    //break is used to come out of a loop it is strong statement
    //when we write a break statement the loop terminates at that point
    //they handle special events that cause loop to terminate
    //example: if someone presses the "X" button in the program we exit
    for (int i=0;i<10;i++){
        if (i==5)
        break;
        cout<<i<<' '; // prints from 0 till 4 bcz at i=5 loop breaks    
    }
    cout<<endl;
    // in this 2nc code we are replacing break with continue
    for (int i=0;i<10;i++){
        if (i==5)
        continue;;
        cout<<i<<' '; //prints from 0 till 4
        //after that at 5 loop continues without going to print
        //then 6 to 9 are printed
        //so output should be 0 1 2 3 4 6 7 8 9    
    }
    cout<<endl;
    return 0;
}