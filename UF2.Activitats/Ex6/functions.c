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

int operation(int num){
    int sum=0,count=0;
   printf("\nSeqüencia:");
   while (sum+count<=num){
        count++;
        printf("%d ",count);
        if (sum+count<=num){
            sum=sum+count;
        }
   }
   printf("\nSuma Total: %d",sum);
}
