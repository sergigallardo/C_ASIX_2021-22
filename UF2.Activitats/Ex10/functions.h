/*
 * functions.h
 *
 *  Created on: 12 ene 2022
 *      Author: user
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

struct biblio{
    char title[100];//Titol del llibre.
    char author[50];//Autor del llibre.
    char editorial[20];//Editorial del llibre.
    char date[100];//Data de publicació
    int units;//Unitats
    char user[100];//Usuari que agafa el llibre de prestec.
    int time;//Temps que te el usuari de prestec(Dies).
};

void modifyData(struct biblio *,int);
void printData(struct biblio *, int);

#endif /* FUNCTIONS_H_ */
