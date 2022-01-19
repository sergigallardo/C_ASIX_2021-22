/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: user
 */

#include <stdio.h>
#include "functions.h"


void main(){
    int num=0,x,naprov=0,nsusp=0,maprov=0,msusp=0;
    for(x=0;x<15;x++){
        num = input();
        if(num<5){
            msusp = num + msusp;
            nsusp++;
        }else{
            maprov = num + maprov;
            naprov++;
        }
    }
    maprov = maprov/naprov;
    msusp = msusp/nsusp;
    printf("Numero de aprovats: %d \n", naprov);
    printf("Mitjana de aprovats: %d \n", maprov);
    printf("Numero de suspesos: %d \n", nsusp);
    printf("Mitjana de suspesos: %d \n", msusp);
}





