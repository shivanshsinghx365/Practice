# include <bits/stdc++.h> //It is basically a header file that includes every standard library.
# define scanf "%s Geeks Quiz"
int main()
{
   printf(scanf, scanf);
   return 0;
}

//RESULT = %s Geeks Quiz Geeks Quiz
/*
<-----Explanation----->
Preprocessing occurs prior to Compilation.
So all instances of scanf gets replaced by %s Geeks Quiz.
Thus the printf statement becomes printf("%s Geeks Quiz", "%s Geeks Quiz"),
thus producing the output given in option (D) %s Geeks Quiz Geeks Quiz
*/