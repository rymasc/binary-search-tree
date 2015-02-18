#include <stdlib.h>
#include <stdio.h>
#include "huff_linkedList.h"

node* nodeInit(int freq){
	node* head = malloc(sizeof(node));
	head->freq = freq;
	head->left = NULL;
	head->right = NULL;
	head->flag = 0;
	return head;
}
	

linkedList* listInit(node* element){
	linkedList* list = malloc(sizeof(linkedList));
	list->element = element;
	list->index = 0;
	list->next = NULL;
	return list;
}

node* nodeFlag(node* n){
	n->flag = 1;
	return n;
}

node* reset(node* n){
	n = nodeInit(0);
	n = nodeFlag(n);
	return n;
}

/*
	for (i=1; i < leafLength; i++){
		node* elem = malloc(sizeof(node));
		elem->freq = freq[i]; 
		elem->left = NULL;
		elem->right = NULL;
		
		linkedList* newStack = malloc(sizeof(linkedList));
		newStack->element = elem;
		newStack->index = i;
		tmpStack->next = newStack;
		tmpStack = tmpStack->next;
	}
*/

