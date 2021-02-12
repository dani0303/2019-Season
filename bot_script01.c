#include <kipr/wombat.h>

int barrier = 1000;//constant value for distance

int main()
{
    drive(1000, 5000);
    printf("Hello World\n");
    return 0;
}

void drive(int speed, int time){
    mav(1, speed);
    mav(2, speed);
    msleep(time);
}

void lowerRamp(){
    if(digital(0) < barrier){
        
}
