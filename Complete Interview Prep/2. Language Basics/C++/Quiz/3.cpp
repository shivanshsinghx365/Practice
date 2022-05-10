#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int main()
{
   int MAX = 100;
   cout << MAX << endl;
   return 0;
}
/*Explanation
The program generates Compilation Error as 
the preprocessor replaces int MAX = 100 with int 1000 = 100, 
which is an invalid statement.*/