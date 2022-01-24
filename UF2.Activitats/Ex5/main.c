/*
 * main.c
 *
 *  Created on: 14 ene 2022
 *      Author: Sergi GaMa
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int num1=2,num2=3;
	num1 = validate();
	num2 = validate();
	printf("\nnum1:%d\nnum2:%d",num1,num2);
	change(num1,num2);

}
