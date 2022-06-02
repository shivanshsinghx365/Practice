#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,100,40,50,500,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int big = arr[0];
    int res = arr[0];

    //method 1
    for (int i=0;i<len;i++){
        res=max(res,arr[i]); //max() is used to find maximum of 2 values
    }

    //method 2
    for (int i=0;i<len;i++){
        if (arr[i]>big){
            big=arr[i];
        }
    }

    //method 3
    //cout << *max_element(arr, arr + len);
    //if it was a vector we would write
    //cout << *max_element(v.begin(), v.end());
    //begin and end give us hold of 1st element and a special end, since vectors have a special element end which comes after the last element to indicate that we have gone beyond the last element
    //so in this program it gives us the iterator to an element after 8, which is a special end marker

    cout<<"Biggest element is : "<<big<<endl;
    cout<<"Result is : "<<res<<endl;
}

/*
OUTPUT:
Biggest element is : 500
Result is : 500
*/