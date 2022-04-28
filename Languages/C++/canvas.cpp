#include <simplecpp>
main_program{
    initCanvas();
    Turtle t1,t2,t3;
    Circle c1(100,100,20),c2(100,100,20); //x,y,radius
    Rectangle r1(200,100,20,40); //x,y of centre width height
    Line l1(20,20,20,30),l2(25,15,25,25);  //x,y of 1st point the second endpoint
    Text t(100,100,"C++");  //x,y of centre, textWidth(t) and textHeight(t) evaluate to height in pixles
    Rectangle r12(100,100,textWidth("C++")+4,textHeight()+4);

    t2.left(120);t3.left(240);wait(0.5);
    repeat(6){
        t1.forward(100);t2.forward(100);t3.forward(100);wait(0.5);
        t1.left(360/6);t2.left(360/6);t3.left(360/6);wait(0.5);
    }
    wait(5);

    /*s is any shape created earlier
    s.moveTo(x,y); //moves s to x,y
    s.move(dx,dy); //moves s by dx,dy
    s.scale(factor);  //scales s by factor
    s.rotate(angle); //rotates by angle in radians
    rotation and scaling can not happen on text
    when objects are created they hae black color, tutles are red
    but it can be changed
    s.setColor(col);
    col must be specified as COLOR("red"), common names life red,green blue etc are understood
    s.setFill(v); only for rectangle and circle
    if v is True interior of s is filled with its color, and left white if v is false
    s.getX(); s.getY(); returns current x & y coordinate of s
    s.getORientation(); gets current orientation, ie the angle throught which s is rotated so far
    s.getScale(); gets current scale factor of s
    s.imprint(); causes image of s to be permanently drawn on canvas at current position, so even 
    if s moves image will be present
    getClick(); waits for users click then returns value 65536x+y, where x,y are cursor position of click
to get x and y use w=getClick(); x=w/65536,y=w%65536 (works because coordinates are much less than 65536)

    */
    
}