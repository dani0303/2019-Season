#include <kipr/botball,h>
 
int button = 3;
int r_motor = 0;
int l_motor = 1;

int main()
 
{
  printf("push the button to execute the robot");
 
 if(analog(3) == 1)
 {
     mav(r_motor, 12000);
     mav(l_motor, 12000);
     msleep(5000);
     mav(r_motor, -12000);
     mav(l_motor, 12000);
     msleep(1500);
 }

 else-if(analog(3) == 0)
 {
     printf("push the button!");
 }
    return 0;
}
 
