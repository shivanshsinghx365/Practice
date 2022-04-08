/*#include <simplecpp>
int main(){
    turtleSim();
    repeat(3){  //repeat is used as a loop
        forward(100); left(120); wait(0.5);  //wait is necessary otherwise the program will 
        //execute too quickly to see properly what happened
        //statements inside {} is BODY
        //each single execution of the body is ITERATION
    }
    wait(1);
}*/
/*
#include <simplecpp>
int main(){
    cout<<"How Many sides? "; //prints message on screen
    int nsides; //reserves space in memory and will store some integer value
    cin>>nsides;
    int angle=360/nsides;
    turtleSim();  //Generates a turtle window
    repeat(nsides){
        forward(100); left(angle); wait(0.5); //length&angles can be negative this changes direction
    }
    //penUp() & penDown cause pen to be raised(no drawing) or lowered(draw)
    //sqrt(x) --> squareroot of x
    //sine(x),cosine(x),tangent(x) --> x in degrees
    //sin(x),cos(x),tan(x) --> x in radians
    wait(3);
}*/

#include <simplecpp> //sqaure side 100, wiht mid points joined
main_program{
    turtleSim();
    repeat(4){
        forward(100);right(90);wait(0.5);
    }
    int s = sqrt(50*50*2);
    forward(50);wait(0.5);right(135);
    repeat(4){
        forward(s);left(90);wait(0.5);
    }
}