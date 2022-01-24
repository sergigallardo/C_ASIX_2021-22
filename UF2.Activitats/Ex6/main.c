/*
 * main.c
 *
 *  Created on: 14 ene 2022
 *      Author: Sergi GaMa
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int num;
	num = validate();

	printf("Numero introduit: %d\n",num);
    operation(num);

}
