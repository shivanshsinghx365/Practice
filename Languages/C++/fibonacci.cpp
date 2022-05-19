//Experiment 1.3
//WAP to generate fibonacci series.up to user defined limit.
//also Write all missing terms(4,6,7,9,10,11,12,14,15...) at end
#include <iostream>
using namespace std;
int main(){
    int n;
    int first=0;
    int second =1;
    int third =1;
    cout<<"How many terms do you need : ";
    cin>>n;
    int arr[n],last;
    arr[0]=first;
    arr[1]=second;
    arr[2]=third;
    for (int i =3;i<n;i++){
        first=second;
        second=third;
        third=first+second;
        arr[i]=third;
        last=arr[i];
    }
    cout<<"Fibonacci : ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Not fibonacci : ";
    for(int i =0;i<last;i++){
        int y=0;
        for(int j=0;j<n;j++){
            if (arr[j]==i){
                y+=1;
            }
        }
        if(y==0){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}