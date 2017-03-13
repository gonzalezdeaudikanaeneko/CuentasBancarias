/*
 * string.c
 *
 *  Created on: 13 de mar. de 2017
 *      Author: gonzalez.eneko
 */
#include <stdio.h>
#include <stdlib.h>

void printStr(char *a){
	int i = 0;
	while(a[i] != '\0'){
		printf("%c", a[i]);
		i++;
	}
}

int length(char *a){
	int c = 0;
	while(*a != '\0'){
		c++;
		a++;
	}
	return c;
}

void copy(char *a, char *b){
	int i = 0;
	while(*b != '\0'){
		a[i] = b[i];
		i++;
	}
	a[i]= '\0';
}

void concat(char *a, char *b){
	int i = 0;
	while(*b != '\0'){
		a[i] = b[i];
		i++;
	}
	a[i]= '\0';
}
