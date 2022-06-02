#include <iostream>
using namespace std;

int main(){

    int arr1[2]{10,20};
    int arr2[6]{30,40};

    cout<<arr1[0]<<" "<<arr1[1]<<endl;
    cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<endl; //The non declared elements get 0 value as discussed earlier

    int arr3[6]{0}; //This method is used to initialize a whole array with zeros
    //this trick works only for 0, don't use any other number because then first element will be whatever you gave
    //and rest will be zero, so not every element got 0 as shown in arr4

    int arr4[6]{7}; //first element is 7 rest 0, it won't give all 7 as someone might assume

    return 0;
}

/*
OUTPUT:
10 20
30 40 0
*/