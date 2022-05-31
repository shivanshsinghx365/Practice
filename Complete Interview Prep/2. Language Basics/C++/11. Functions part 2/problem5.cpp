#include <iostream>
using namespace std;
int main(){
    cout<<"geeks ";
    main();
}

//Output is infinite loop or "non-terminating recursion" of "geeks geeks ....""

//In the end it gives a run time error called stack overflow, it generates a segmentation fault
//I got 'Segmentation fault (core dumped)'
//this occurs because the stack in which the functions were stored got full before execution could finish