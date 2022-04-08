//What is compter?
//It is a giant electrical circuit, that recives data from the external world,processes it
//and gives an output to the external world

//What is a program
//A precise description of the calculation that we want the computer to perform

//C++
//Bjarne Stroustrup in 1980s, Bell Laboratories

/*#include <simplecpp>
main_program{
    turtleSim();
    forward(100);right(90);wait(0.5);
    forward(100);right(90);wait(0.5);
    forward(100);right(90);wait(0.5);
    forward(100);right(90);wait(0.5);
}*/

#include <simplecpp>
main_program{
    int n;
    turtleSim();
    cout<<"How many sides ? ";
    cin>>n;
    repeat(n){          //repeat statement(works like loop)
        forward(100);
        right(180-n);
        wait(0.5);
    }
}