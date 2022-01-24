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
		printf("Introdueix un valor:\n=>");
		scanf("%d",&num);
	}while(num<1);
	return num;
}

int change(int a, int b){
		int aux;
		aux=b;
		b=a;
		a=aux;
		printf("\nnum1:%d\nnum2:%d",a,b);
}
