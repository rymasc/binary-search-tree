#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	struct node * next;
};

typedef struct node linkedList;

void main(){
	linkedList *current, *head;
	int i;
	
	head = NULL;
	
	for(i=1; i<=10; i++){
		current = (linkedList*)malloc(sizeof(linkedList));
		current->val = i;
		current->next = head;
		head = current;
	}
	
	current = head;
	
	while(current){
		printf("%d\n", current->val);
		current = current->next;
	}
}
