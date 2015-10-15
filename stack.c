/*==========================================================
        stack.c
============================================================

        target: Implemen stack
        Author: Chiu-Hsin Lo
        Date: 2015.10.09
        Version: 1.0.0

===========================================================*/
#include "stack.h"
#include "mm.c"
#include <stdio.h>


void push(node** top, DATA_TYPE value){
	/*Create a new pointer and alloc	
	* a memory to store data		
	*/			
	node* ptr = (node*)mymalloc(sizeof(node));
	/*
	*push to stack
	*/
	if(!ptr){	//alloc fail!!
		printf("Mymalloc fail!!\n");
		exit(1);
	}

	ptr->data = value;
	ptr->pre = *top;
	*top = ptr;	//new top now





}

DATA_TYPE pop(node** top){
	DATA_TYPE to_return;
	node* tmp;

	to_return = (*top)->data;
	tmp = *top;
	*top = (*top)->pre;
	myfree(tmp);

	return to_return;

}

int stack_empty(node* top){
	return !top;
}
