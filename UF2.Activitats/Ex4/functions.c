/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"

int  input(){
    int num = 0;
    do{
        printf("Introdueix una nota:\n=>");
        scanf("%d",&num);
        return num;
    }while(num<0 || num>10);

}
