#include <kipr/wombat.h>

int main()
{
    create_connect();
    turn(90);//turns create facing west
    create_drive_straight(90);
    msleep(2000);//drive forward to retrieve cubes
    turn(-90);
    create_drive_straight(90);
    msleep(3500);//drive to center line on game board
    printf("Hello World\n");
    return 0;
}

void turn(int degrees){
    create_stop();
    if (degrees < 1)
    {
        create_spin_CCW(100);
    }
    else
    {
        create_spin_CW(100);
    }
    msleep(abs(1625 / 90 * degrees));
    create_stop();
}
