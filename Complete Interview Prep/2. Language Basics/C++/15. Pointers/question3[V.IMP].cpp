#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20};
    int *p1 =arr;
    //prefix and * have same precedence
    //associativity for both is right to left
    //so it is treated as ++(*p)
    ++*p1; // this references to arr[0] and pointer causes arr[0] to increase by 1, to become 11
    cout<<arr[0]<<" "<<arr[1]<<" "<<*p1<<endl;
    /*
    *p2++ here post fix has more precedence than prefix, so fist we reach next element and then we get value of next/second element
    however if we cout it in same line it wont change & we would get 10, bcz it is post fix and will refer to 20 only in the next line

    *++p3 here we reach the second/next element and get its value via *
    unlike above statement even if cout is done we get the value of 2nd element since the operation was prefix & not postfixT
    */
}

/*
OUTPUT
11 20 11
*/