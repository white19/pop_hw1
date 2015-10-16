/*==========================================================
        queue.c
============================================================

        target: Implement queue
        Author: Chiu-Hsin Lo
        Date: 2015.10.15
        Version: 1.0.1

	1.0.1 check stack empty again

===========================================================*/
#include "queue.h"
#include "mm.c"
#include <stdio.h>

void en_queue(node** front, node** rear, DATA_TYPE value){
	/*Create a new pointer and alloc
        * a memory to store data
        */
        node* ptr = (node*)mymalloc(sizeof(node));
	/*
        *push data to queue
        */
	 if(!ptr){       //alloc fail!!
                printf("Mymalloc fail!!\n");
                exit(1);
        }
	ptr->data = value;
	ptr->next = NULL;
	if(queue_empty(*front)){
		*rear = ptr;
		*front = ptr;
	}
	else{
		(*rear)->next = ptr;
		*rear = ptr;
	}
	en_queue_msg(value);

}

DATA_TYPE de_queue(node** front){

	DATA_TYPE to_return;
        node* tmp;

	if(queue_empty(*front)){
                                printf("The queue is empty!!!\n");
                                exit(1);
        }else{

	        to_return = (*front)->data;
		tmp = *front;
		*front = (*front)->next;
		myfree(tmp);

	return to_return;

	}

}

int queue_size(node* front){

	if(queue_empty(front))
		return 0;

	int counter = 1;
	while(front = front->next){
		++counter;
	}
	return counter;

}

int queue_empty(node* front){
	return !front;
}

DATA_TYPE get_front(node* front){
	return front->data;
}

DATA_TYPE get_rear(node* rear){
	return rear->data;
}


void en_queue_msg(DATA_TYPE v){
	printf("put %d in queue.\n",v);
}

void de_queue_msg(DATA_TYPE v){
	printf("remove %d from queue.\n",v);
}


