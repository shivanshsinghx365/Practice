#Basics
##OOPS using c++
*object oriented
*pre-compiled
*intermediate-level language

compilation begins at int main()
##Features of c++ programs
-object is an instance

##operators in c++
arithmetic (+,-,%,/,*)
assignment (=)
auto increment & auto decrement (++,--)
logical (&&,||,!)
comparison (<,>,==,!=,>=,<=)
bitwise (&,|,^,~,>>,<<) --> these operators perform operations bit by bit
    example : num1=11 /* equal to 00001011 */
              num2=22 /* equal to 00010110 */
              num1 & num2 =  00000010  (both 1 means 1)
              num1 | num2 =  00011111  (one 1 also means 1)
ternary or conditional (?:)  --> [(condition)?true:false]

##loops: executing a block of statements repeatedly until a particular condition is satisfied

types of loop:
    for loop (entry-controlled)
    while loop (entry-controlled)
    do...while (exit-controlled) (executes at least once)

for (initialization : condition : update){
    code
}

while (condition){
    code
    update
}

do{
    code
    update
}
while(condition)