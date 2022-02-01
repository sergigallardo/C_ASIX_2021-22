/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */
#include <stdio.h>
#include "functions.h"

void modifyData(struct biblio *b,x){//punter a office
	for(int y;y<x;y++){
		printf("Introdueix el titol del llibre:\n=>");
		scanf("%s",b[y].title);
		printf("Introdueix el nom del autor:=>");
		scanf("%s", b[y].author);
		printf("Introdueix el nom de la editorial del llibre:\n=>");
		scanf("%s", b[y].editorial);
		printf("Introdueix la data de publicació:\n=>");
		scanf("%s",b[y].date);
		printf("Introdueix quantes unitats tens:\n=>");
		scanf("%d",b[y].units);
		printf("Introdueix el usuari que a demanat el prestec:\n=>");
		scanf("%s", b[y].user);
		printf("Introdueix el temps que durara el prestec:(Format en dias)\n=>");
		scanf("%d", b[y].time);
	}
void printData(struct biblio *b, int x){
	 printf("------------------------------------------------\n");
	 for(int y=0; y<x; y++){
		 printf("Aquestes son les dades del llibre --> %s\n", b[y].title);
		 printf("Nom del autor -- > %s\n", b[y].author);
		 printf("Editorial --> %s\n",b[y].editorial);
		 printf("Data de publicació --> %d\n",b[y].date);
		 printf("Unitats --> %d\n",b[y].units);
		 printf("Usuari prestec --> %s\n",b[y].user);
		 printf("Temps de prestec --> %d Dies", b[y].time);
		 printf("----------------------------------------------");
	 	 }
	}

}



