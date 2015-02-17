#include <stdlib.h>
#include <stdio.h>
#include "huff_linkedList.h"

node* nodeInit(int freq){
	node* head = malloc(sizeof(node));
	head->freq = 0;
	head->left = NULL;
	head->right = NULL;
	return head;
}
	

linkedList* listInit(int freq, node* element){
	linkedList* list = malloc(sizeof(linkedList));
	list->element = element;
	list->index = 0;
	list->next = NULL;
	return list;
}




