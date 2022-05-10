#include <bits/stdc++.h>
using namespace std;
int main()
{
   unsigned int x = -1;
   int y = ~0;
   if (x == y)
      cout << "same";
   else
      cout << "not same";
   return 0;
}
//Answer = same
/*
Explanation
When we assign unsigned int x = -1,
-1 gets converted into it's 2's complement form
and stored as 11111111 (bit-format in memory),
which is the same as complementing all the bits of 0.
*/