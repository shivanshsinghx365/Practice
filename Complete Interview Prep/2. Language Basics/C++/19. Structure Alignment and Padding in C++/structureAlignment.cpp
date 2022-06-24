#include <iostream>
using namespace std;

struct s1{
    char c1;     //1 char byte + 7 extra byte
    double d1;   //since max element is of 8 byte so blocks of 8 bytes are made
    char c2;     //1 char + 7 extra
    //total = 1+7+8+1+7 = 24
};

struct s2{
    char c1;
    char c2;    // 1 + 1 char and 6 extra
    double d1;  //max size is 8 so blocks of 8
    //total = 1+1+6+8 = 16
};

struct s3{
    double d1;
    char c1;
    char c2;
    // 8 + 1 + 1 + 6 = 16 normally
    //8+1+1 = 10 packed
}__attribute__((packed));;

int main(){
    cout<<sizeof(s1)<<"  "<<sizeof(s2)<<" "<<sizeof(s3)<<endl;
    return 0;
}

/*
OUTPUT: (Machine Dependent)
24 16
*/