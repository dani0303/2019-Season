#include <kipr/botball.h>
 
int button = 3;
int r_motor = 0;
int l_motor = 1;

int main()
 
{
  printf("push the button to execute the robot");
 int counter = 0;
 while(counter < 1)
 {
     if(analog(button) == 0)
     {
         mav(r_motor, 12000);
         mav(l_motor, 12000);
         msleep(10000);
     }
     
     else
     {
         printf("push the button!");
         
     }
     
     counter+100;
 }
     
     

    return 0;
}
 
