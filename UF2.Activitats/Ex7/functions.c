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
	}while(num<1 || num>10);
	return num;
}

int  order(int *array,int x){
	for (int i = 0; i < x-1; i++) {
		     for(int j = i + 1; j < x; j++) {
		            if (array[i] > array[j]) {
		            int canvi = array[i];
		             array[i] = array[j];
		             array[j] = canvi;
		             }
		     }
		 }
}

int mn(int *array,int x){
	int min,y=1;
	min= array[y];
	for(y=0;y<x;y++){
		if(min>array[y]){
			min=array[y];
		}
	}
	return min;
}

int mx(int *array,int x){
	int max,y=1;
	max= array[y];
	for(y=0;y<x;y++){
		if(max<array[y]){
			max=array[y];
		}
	}
	return max;
}
