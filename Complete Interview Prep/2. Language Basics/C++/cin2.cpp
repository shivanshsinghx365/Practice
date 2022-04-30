//demonstrate use of cin
//used to multiply 2 user defined numbers
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x:"<<endl;
    cin>>x;
    cout<<"Enter y:"<<endl;
    cin>>y;
    cout<<"Multiplication is "<<x*y<<endl;
    return 0;
}
/*
if you enter x as "10 20" and hen hit enter
value of y is not asked in this case
this happens due to buffering
c++ input and output are buffered
when prompted to enter x user entered [10 20] all this is stored in a buffer\
when cin x is done value 10 is given to x
now the execution reaches y
and since value 20 is already in buffer, y automatically gets value y without taking input from user

in buffering in c++ whatever you type does not go to your program immediately
it is first stored in a buffer and then sent to cpu
reason for this is efficiency
keyboard is slow and cpu is fast
so intermidiate buffer is used to store data while inputing values in the meanwhile
and the cpu processes the data in one go when we are done inputting

difference between endl and \n : both are used to enter a newline
but endl also flushes the buffer where as \n just puts a newline and does not flush the buffer
*/