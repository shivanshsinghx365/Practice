//WAP that takes 10 pair of numbers from the user
//For every pair (x,y), it prints x/y
#include  <iostream>
using namespace std;
int main(){
    for (int i=0;i<10;i++){
        int x,y;
        cout<<"Enter x and y : ";
        cin>>x>>y;
        if (y==0){
            cout<<"Invalid"<<endl;
            continue;// when you write continue rest statements after it inside a loop are not executed
            //and the control goes back to the first line of the loop
            //this helps us to skip some statements of loop in a particular case
            //and as expected value of i also remains the same and doesn't increment as usual
        }
        else{
            cout<<x/y<<endl;//integer division is happening here
        }
    }
    return 0;
}