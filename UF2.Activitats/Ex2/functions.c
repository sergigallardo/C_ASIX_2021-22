/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"

int validate(){
	int seg;
	do{
		printf("Introdueix el numero de segons:\n=>");
		scanf("%d", &seg);
	}while(seg<0);
	return seg;
}
int calculate(seg, min, hour, day){
	 if (seg > 59){
	   min = seg / 60;
	   seg = seg % 60;
	   if (min > 59){
	    hour = min / 60;
	    min = min % 60;
	    if (hour > 23){
	     day = hour / 24;
	     hour = hour % 24;
	    }
	   }
	  }
	  printf(" %d díes, %d hores, %d minuts y %d segons.", day,hour,min,seg);
	 }
