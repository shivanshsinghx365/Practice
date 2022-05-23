//WAP to print GfG 10 times using loop
#include <iostream>
using namespace std;
int main(){
    //for(int i=1;i<10;) is infinite loop
    for(int i=0;i<10;i++){      //for loop
        cout<<i+1<<". GfG 1\n";
    }
    cout<<endl;


    int j=1;
    while(j<11){                //while loop
        cout<<j<<". GfG 2\n";
        j++;
    }
    cout<<endl;


    int k=1;
    do{                         //do while loop
        cout<<k<<". GfG 3\n";
        k++;
    }
    while (k<11);
    cout<<endl;


    return 0;
}