/*
 * functions.c
 *
 *  Created on: 14 ene 2022
 *      Author: Sergi GaMa
 */
#include <stdio.h>
#include "functions.h"
int validate(){
	int num;
	do{
		printf("Introdueix un valor numeric:\n=>");
		scanf("%d",&num);
	}while(num<1 || num>10);
	return num;
}
