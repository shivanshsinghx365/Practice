#include <stdio.h>
void main(){
    int a = !0;      // not ! of 0 is 1 or true
    printf("\n!0 = %d\n",a);
    int n = !7;     // not ! of non-0 numbers is 0 or false
    printf("\n!non-0 = %d\n",n);
}