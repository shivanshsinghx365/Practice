#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    int z=x+x*y;//* has more priority, so answer= 10 + (20*10)=210
    cout<<z<<" ";
    z=y/x*x;//+ and -, and / and * have same precedence
    //in case of 2 operators with same precedence, associativity comes into picture
    //so execution can be from left to right or right to left depending on associativity type
    //here it is left to right since associativity of division & multiplication is from left to right
    //operators in same group(example: + and - & * and /) have same associativity
    //so answer here is z=(y/x)*x=(20/10)*10=2+10=12
    cout<<z<<endl;
    return 0;
}