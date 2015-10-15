/*==========================================================
        queue.h
============================================================

        target: Define queue used function
        Author: Chiu-Hsin Lo
        Date: 2015.10.15
        Version: 1.0.1

===========================================================*/
typedef int DATA_TYPE;

struct node{
	DATA_TYPE data;
	node *next;
};

void en_queue(node** front,node** rear, DATA_TYPE value);
DATA_TYPE de_queue(node** front);
int queue_empty(node* front);
DATA_TYPE get_front(node* front);
DATA_TYPE get_rear(node* rear);
void en_queue_msg(DATA_TYPE v);
void de_queue_msg(DATA_TYPE v);

