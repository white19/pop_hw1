/*==========================================================
        main_stack.c
============================================================

        target: A driver of using stack
        Author: Chiu-Hsin Lo
        Date: 2015.10.09
        Version: 1.0.0
        method: push    Push node with next input value.

                pop     Pop the top node from stack.

                q       Quit.

===========================================================*/
#include "stack.c"
#include <string.h>

int main(){

	char commend[10];//recieve input commend
	DATA_TYPE v;//recieve input data
	node* top;//top pointer
	top = NULL;//initialize
	
	while(1){
		//output hint
		printf("\tEnter push or pop, q is to leave.\n");
		scanf("%s", commend);//recieve cmd
		//to push
		if(!strcmp(commend,"push")){
			printf("\tEnter a value to push to the stack\n");
			scanf("%d",&v);
			push(&top,v);
			printf("you push %d\n",top->data);///
		//to pop
		}else if(!strcmp(commend,"pop")){
			if(stack_empty(top)){
        		        printf("The stack is empty!!!\n");
        		}else{
				printf("You pop ");
				printf("%d\n",pop(&top));
			}
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
