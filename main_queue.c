/*==========================================================
	main_queue.c
============================================================

	target: A driver of using queue
	Author: Chiu-Hsin Lo
	Date: 2015.10.15
	Version: 1.0.0
	method: en	Add node with the next input value
			to the rear.

		de	Delete the front node from queue.

		size	Check queue size.

		q	Quit.

===========================================================*/
#include "queue.c"
#include <string.h>

int main(){
	char commend[10];//recieve input commend
	DATA_TYPE v;//recieve input data
	node* front;//front pointer
	node* rear;//rear pointer
	front = NULL;//initialize
	rear = NULL;

	while(1){
		//output hint
		printf("\tEnter \'en\' or \'de\' to enqueue or dequeue,"
			"\'size\' to check queue size,"
			 "\'q\' is to leave.\n");
                scanf("%s", commend);//recieve cmd
		//to en_queu
		if(!strcmp(commend,"en")){
			printf("\tEnter a value to push to the queue\n");
                        scanf("%d",&v);
                        en_queue(&front, &rear,v);
			en_queue_msg(v);
		//to de_queue
		}else if(!strcmp(commend,"de")){
			if(queue_empty(front)){
				printf("The queue is empty!!!\n");
			}else{
				de_queue_msg(de_queue(&front));
			}
		//to get size
		}else if(!strcmp(commend,"size")){
			printf("The size of queue is %d.\n",queue_size(front));
		//to quit
		}else if(!strcmp(commend,"q")){
			printf("End process\n");
                        break;
		//enter wrong commend
		}else{
			 printf("Commend not found!!\n");
		}

	}




	return 0;
}
