#include <iostream>
using namespace std;

int average(int arr[], int n){
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    int res =sum/n;
    return res;
}
//Here if arr[] = {4,5,2} & n =3, we get result as an integer 3 which is fine
//However if someone enter n=0, this will create an error, so we can add an if condition to detect this

int main(){
    return 0;
}