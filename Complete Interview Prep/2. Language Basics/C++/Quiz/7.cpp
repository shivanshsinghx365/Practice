#include <bits/stdc++.h>
using namespace std;
int main()
{
   float c = 5.0;
   cout << "Temperature in Fahrenheit is: " << (9/5)*c + 32;
   return 0;
}
//Answer = Temperature in Fahrenheit is: 37
/*
Explanation
Although data-type of c is floating-point,
but due to parenthesis on (9/5), it gets evaluated to 1 (integer division),
and final result becomes 1*5.0+32.
*/