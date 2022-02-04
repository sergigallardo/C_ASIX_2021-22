/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"
#define SIZE 100

int validate(int *array){
    int x=1;
	while(x<SIZE){
        if(x%2==0){
        	array[x]=x;
        	printf("%d ",array[x]);
        }
        x++;
	}
}
