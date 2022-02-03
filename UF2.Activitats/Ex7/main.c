/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: user
 */

#include <stdio.h>
#include "functions.h"

void main(){
	int num , x=1,y=0,sum=0,mid,z,min,max;
	int array[x];
	printf("Introduiex el tamany del vector\n=>");
	scanf("%d",&x);
	while(y<x){
		num=validate();
		array[y]=num;
		sum=num+sum;
		y++;
	}
	order(&array,x);
	min = mn(&array,x);
	max = mx(&array,x);
	mid=sum/x;
	printf("Mitjana: %d\n",mid);
	printf("Valor Minim: %d\n", min);
	printf("Valor Maxim: %d\n", max);
	printf("Valors ordenats:");
	for(z=0;z<x;z++){
		printf("%d ",array[z]);
	}
}

