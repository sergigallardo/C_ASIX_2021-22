/*
 * main.c
 *
 *  Created on: 14 ene 2022
 *      Author: Sergi GaMa
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int num , x=1,y=0,sum=0,mid;
	int array[x];
	printf("Introduiex el tamany del vector\n=>");
	scanf("%d",&x);
	while(y<x){
		num=validate();
		array[y]=num;
		sum=num+sum;
		y++;
	}
	mid=sum/x;
	printf("Mitjana: %d",mid);
}
