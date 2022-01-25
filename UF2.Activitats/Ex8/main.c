/*
 * main.c
 *
 *  Created on: 14 ene 2022
 *      Author: Sergi GaMa
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int x,y,cal;
	x = validate();
	y = validate();

	cal=elevated(x,y);
	printf("El Resultat de %d elevat a %d es => %d",x,y,cal);
}
