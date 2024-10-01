/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2024
 *      Author: Dell
 */

#include "software_timer.h"

int time_counter1 = 0;
int timer1_flag = 0;

void settimer1(int duration){
	time_counter1 = duration;
	timer1_flag = 0;
}
void timerun(){
	if(time_counter1 > 0){
		time_counter1--;
		if(time_counter1 <= 0){
			timer1_flag = 1;
		}
	}
}
