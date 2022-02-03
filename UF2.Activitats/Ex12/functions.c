/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"
int validate(){
	int num;
	do{
		printf("Introdueix un valor numeric:\n=>");
		scanf("%d",&num);
	}while(num<1 || num>50);
	return num;
}

int  order(int *array,int x){
	for (int i = 0; i < x-1; i++) {
		     for(int j = i + 1; j < x; j++) {
		            if (array[i] < array[j]) {
		            int canvi = array[i];
		             array[i] = array[j];
		             array[j] = canvi;
		             }
		     }
		 }
}
