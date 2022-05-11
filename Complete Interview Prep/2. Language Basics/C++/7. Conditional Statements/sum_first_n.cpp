//WAP to find the sum of first  natural numbers, show error if number is negative

#include <iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter the value of n : ";
    cin>>input;
    if (input>=0){
        cout<<"Answer = "<<(input*(input+1))/2<<endl;
    }
    else{
        cout<<"Error : Negative number passed"<<endl;
    }
    return 0;
}