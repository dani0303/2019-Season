#include <kipr/wombat.h>
//CONSTANTS TIME
int startPVC = 3000;
int quick_correct = 8;

int main()
{
    startPOS();//move from start to PVC
    ao();//turns motor off for 1seconds
    msleep(1000);
    armPVC();//lowers arm to get PVC
    
    ao();//turns off robot for 1second
    msleep(1000);
    
    drive(500, 3500);//moves the  bot forward to pull PVC out
    ao();//turns robot for 1second
    msleep(1000);
    
    turn_left_back(950);//rotate robot the left
    ao();//turn robot off for 1second
    msleep(1000);
    
    enable_servos();
    set_servo_position(0, 0);
    msleep(1000);
    ao();
    disable_servos();
    
    ao();
    msleep(1000);
    drive(-1000, 1500);//robot push pipe forward
    drive(800,1450);//backwards robot
    turn_right_back(6000);//turn right will face the robot towards the pipe
    
    drive(800, 5000);//drives the robot straight to get into position
    turn_left(850);//turns left to face the ramp
    printf("Hello World\n");
    return 0;
}


void armPVC(){
    enable_servos();
    set_servo_position(0, 1909);
    msleep(1000);
    ao();
    disable_servos();
}

void turn_left_back(int time){
    mav(0,-1000);
    mav(1, 1000);
    msleep(time);
}

void startPOS(){
    mav(0, -750);
    mav(1, -750);
    msleep(startPVC);
}

void drive(int speed, int time){
    mav(0, speed);
    mav(1, speed);
    msleep(time);
}
void turn_right_back(int time){
  mav(0,500);
  mav(1,-500);
  msleep(time);  
}

void turn_left(int time){
    mav(0, -1000);
    mav(1, 1000);
    msleep(time);
}

void line_follower(int runtime){
    int counter1 = 0;
    int counter2 = 0;
    while(counter1 <= quick_correct*runtime){
        //if sensor on tape
        if(analog(f_ir_port) >= 1865){
            //veer slightly left
            mav(m_port_l, 1200);
            mav(m_port_r, 900);
            //checks position every 1/100 seconds
            msleep(10);
        }
        //assumed that sensor is off tape
        if(analog(4) <= 1865){
            //veer slightly right
            mav(m_port_l, 900);
            mav(m_port_r, 1200);
            //checks position every 1/100 seconds
            msleep(10);
        }
        //increments counter
        counter1++;
    }
    while(counter <= straighten_correct*runtime){
        if(analog(
    }
	
}


