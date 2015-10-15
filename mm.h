/*==========================================================
        mm.h
============================================================

        target: Define memory allocating about function
        Author: Chiu-Hsin Lo
        Date: 2015.10.09
        Version: 1.0.0

===========================================================*/
#include <stdlib.h>

void *mymalloc(size_t size);
void myfree(void *ptr);
void *mycalloc(size_t nmemb, size_t size);
void *myrealloc(void *ptr, size_t size);
