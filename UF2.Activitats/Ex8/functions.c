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
	}while(num<1);
	return num;
}

int elevated(int a, int b){
	int cal;
	cal= pow(a, b); // pow sirve para elevar valores numericos, a es el numero a elevar y b la potencia.
	return cal;
}

