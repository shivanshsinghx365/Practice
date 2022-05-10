#include <bits/stdc++.h>
using namespace std;
#define square(x) x*x
int main()
{
  int x;
  x = 36/square(6);
  cout << x;
  return 0;
}
//ANS = 36
/*
Explanation
The call 36/square(6) gets replaced by 36/6*6,
and having same operator precedence (between * and /),
left-to-right associativity comes into play yielding (36/6)*6.
*/