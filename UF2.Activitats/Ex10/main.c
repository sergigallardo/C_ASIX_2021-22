/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: user
 */

#include <stdio.h>

//Función principal del programa

#include <stdio.h>
#include "functions.h"

void main() {
	int x;
	printf("Introdueix quants llibres vols registrar:\n=>");
	scanf("%d", &x);
	struct biblio bbio[x];
	modifyData(bbio,x);
	printDa

}

