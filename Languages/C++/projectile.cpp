#include <simplecpp>
main_program{
    initCanvas("Projectile",50,50);
    int start=getClick();
    Circle p(start/65536,start%65536,5);
    p.penDown();
    double vx=1,vy=-1,gravity=0.01;
    repeat(500){
        p.move(vx,vy);
        vy+=gravity;
        wait(0.01);
    }
    getClick();
}