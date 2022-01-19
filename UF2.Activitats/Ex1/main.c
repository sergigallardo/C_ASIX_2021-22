/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: user
 */

#include <stdio.h>
#include "functions.h"

void main(){
	int num1,num2, val1,val2;
	printf("Introdueix el inici del interval:\n");
	scanf("%d",&val1);
	printf("Introdueix el limit del interval:\n");
	scanf("%d",&val2);
	num1 = validate(val1,val2);
	num2 = validate(val1,val2);
	if (num1 > num2){
		printf("El num1 es major");
	}
	else{
		if(num2>num1){
			printf("El num2 es major.");
		}
		else{
			printf("Els dos valors son iguals.");
		}
	}
}




