/*==========================================================
        stack.h
============================================================

        target: Define stack used function
        Author: Chiu-Hsin Lo
        Date: 2015.10.15
        Version: 1.0.1

===========================================================*/

typedef int DATA_TYPE;

struct node{
	DATA_TYPE data;
	node *pre;

};

void push(node** top, DATA_TYPE value);
DATA_TYPE pop(node** top);
int stack_empty(node* top);
