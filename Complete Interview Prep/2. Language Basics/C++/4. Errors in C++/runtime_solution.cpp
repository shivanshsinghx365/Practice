//To solve the error encountered in previous solution
#include <iostream>
using namespace std;
int main(){
    int x=10,y=0;
    int z;
    if (y==0){
        //Another way to fix this in a user inputted program was to retake value of y until
        //it is a non zero number, this would have saved us from stopping the program and re-running it
        //as we did here
        cout<<"Division by 0 not possible"<<endl;
        exit(0); //To exit the program directly
        //indicates successful termination of the program
        //exit(1) denotes failure most times
    }
    else{
        z=x/y;
        cout<<"Answer = "<<z<<endl;
    }
    return 0;
}