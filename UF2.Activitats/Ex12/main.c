/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: user
 */

#include <stdio.h>
#include "functions.h"

void main(){
	int num, x=1,y=0;
	int array[x];
	printf("Introduiex el tamany del vector\n=>");
	scanf("%d",&x);
	while(y<x){
		num=validate();
		array[y]=num;
		y++;
	}
	order(&array,x);
	printf("Valors ordenats:");
	for(y=0;y<x;y++){
		printf("%d ",array[y]);
	}
}

