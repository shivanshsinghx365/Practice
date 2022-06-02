#include <iostream>
#include <numeric> //required to use accumulate

using namespace std;

int main(){
    int arr[]={10,20,5,30};
    int len = sizeof(arr)/sizeof(arr[0]);

    //Method 1 : Traverse array and add individual elements
    int sum=0;
    for (int i=0; i<len; i++){
        sum+=arr[i];
    }
    cout<<"sum of elements = "<<sum<<endl;

    //Method 2 : By using accumulate function
    int s=0; //s is initial value if we had passed 5 then accumulate would have been 70
    s=accumulate(arr,arr+len,s); //this can be also used for vectors as
    //accumulate(v.begin(),v.end(),s);
    cout<<"accumulate = "<<s<<endl;
}

/*
OUTPUT:
sum of elements = 65
accumulate = 65
*/