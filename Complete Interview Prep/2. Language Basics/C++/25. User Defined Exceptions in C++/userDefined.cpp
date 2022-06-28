#include <iostream>
using namespace std;

class ArraySizeZeroException{};
class ArraySizeNegativeException{};

int average(int arr[],int n){
    if(n==0){
        throw ArraySizeZeroException();
    }
    if (n<0){
        throw ArraySizeNegativeException();
    }

    int sum =0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    try{
        int res = average(arr,n);
        cout<<res<<endl;
    }
    catch(ArraySizeZeroException &e1){
        cout<<"Array size is zero"<<endl;
    }
    catch(ArraySizeNegativeException &e2){
        cout<<"Array size is negative"<<endl;
    }
    return 0;
}