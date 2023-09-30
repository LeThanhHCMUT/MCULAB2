/* * softwareTimer.c * *
 * Created on: Sep 23, 2023 *
 * Author: Le Ba Thanh */
#include "software_timer.h"
int timer1_flag = 0;
int timer1_counter = 0;
void setTimer1(int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}
void timer1Run()
{
	if(timer1_counter >= 0)
	{
		timer1_counter--;
		if(timer1_counter == 0)
		{
			timer1_flag = 1;
		}
	}
}



