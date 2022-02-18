//Exp 2.1
//WAP to input matrix of dimension m*n. If base address is 1000. Find the address
//of (m-1,n-1) element of the matrix
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    int a[m][n];
    for (int i=0; i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"Enter element "<<i<<", "<<j<<" : ";
            cin>>a[i][j];
        }
    }
    /*cout<<"----MatriX----\n";  //TO PRINT MATRIX
    for (int i=0; i<m;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int B=1000;
    int y;
    /*for (int i=0; i<m;i++){    //TO PRINT ADDRESS OF ALL ELEMENTS
        for (int j=0;j<n;j++){
            y=B+4*((i*n)+j);
            cout<<"Address of "<<i<<", "<<j<<" is "<<y<<endl;
        }
    }*/
    y=B+4*(((m-1)*n)+(n-1));
    cout<<"Address of (m-1,n-1) or last element : "<<y<<endl;

    // simpler approach
    //cout<<"Address : "<<(B+(m*n*4)-4)<<endl;
}