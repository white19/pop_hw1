/*==========================================================
        mm.c
============================================================

        target: redirect memory allocation function
        Author: Chiu-Hsin Lo
        Date: 2015.10.09
        Version: 1.0.0

===========================================================*/
#include "mm.h"

void *mymalloc(size_t size){
	return malloc(size);
}

void myfree(void *ptr){
	return free(ptr);
}

void *mycalloc(size_t nmemb, size_t size){
	return calloc(nmemb, size);
}

void *myrealloc(void *ptr, size_t size){
	return realloc(ptr,size);
}
