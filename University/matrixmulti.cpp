//WAP to multiply two matrices
#include <iostream>
using namespace std;
int main(){
    int i,j,i1,j1,l,m;
    cout<<"Enter number of rows of matrix 1 : ";
    cin>>i;
    cout<<"Enter number of columns of matrix 1 : ";
    cin>>j;
    cout<<"Enter number of rows of matrix 2 : ";
    cin>>i1;
    cout<<"Enter number of columns of matrix 2 : ";
    cin>>j1;
    l=i;
    m=j1;
    int a[i][j],ar[i1][j1];
    if (j!=i1){
        cout<<"Multiplication not possible\n";
    }
    else{
        int arr[i][j1];
        cout<<"enter elements of 1st matrix : ";
        for(int x=0;x<i;x++){
            for(int y=0;y<j;y++){
                cin>>a[x][y];
            }
        }
        cout<<"enter elements of 2nd matrix : ";
        for(int x=0;x<i1;x++){
            for(int y=0;y<j1;y++){
                cin>>ar[x][y];
            }
        }
        cout<<"Final matrix : \n";
        for(int x=0;x<i;x++){
            for(int y=0;y<j1;y++){
                arr[x][y]=0;
                for(int z=0;z<j;z++){
                    arr[x][y]+=((a[x][z])*(ar[z][y]));
                }
            }
        }
        for(int x=0;x<i;x++){
            for(int y=0;y<j1;y++){
                cout<<arr[x][y]<<' ';
            }
            cout<<endl;
        }
    }
}