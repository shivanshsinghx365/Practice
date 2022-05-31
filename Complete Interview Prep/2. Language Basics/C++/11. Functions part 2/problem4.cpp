#include <iostream>
using namespace std;
void fun(int x){
    if(x==0){ //This is the termination condition, and is necessary to prevent infinite loops or "non-terminating recursion"
    //Such conditions/cases are known as base cases, in absence of a correct base case we get infinite loop or "non-terminating recursion"
        return;
    }
    else{
        cout<<"geeks"<<" ";
        fun(x-1); // calling same function inside function is called recursive function, they are allowed in almost all languages c, c++,java,python and works like a normal function call  
        cout<<"for geeks ";
    }
}
int main(){
    fun(3);
    return 0;
}

/*
Output:
geeks geeks geeks
*/

/*
Output2 :
geeks geeks geeks for geeks for geeks for geeks 
*/