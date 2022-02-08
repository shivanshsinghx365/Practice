/*#include <simplecpp>
int main(){
    turtleSim();
    repeat(4){
        forward(100); right(90); wait(0.5);
    }
    forward(50);
    right(45);
    repeat(4){
        forward(sqrt(5000)); right(90);wait(0.5);
    }
    wait(3);
}*/

#include <simplecpp>
int main(){
    turtleSim();
    repeat(10){
        penDown();
        forward(10);
        wait(0.5);
        penUp();
        forward(10);
    }
    wait(3);
}