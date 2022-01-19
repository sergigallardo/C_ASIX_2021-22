/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"

validate(val1,val2){
	int num,x=4;

	do{
		--x;
		printf("Introdueix un valor enter:(Intents: %d)\n=>", x);
		scanf("%d",&num);
		if(x == 1){
			printf("T'has quedat sense intents\nAturant programa....");
			abort();
		}
	}while(num<val1 || num>val2);
	return num;
}
