/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"

int bin(int num){
	if (num) {
		bin(num / 2);
	    printf("%d", num % 2);
	}
}
int validate(){
	int num;

	do{
		printf("Introdueix un valor numeric\n=>");
		scanf("%d",&num);
	}while(num<1);
	return num;
}
