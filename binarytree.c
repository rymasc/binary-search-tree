#include <stdio.h>
#include <stdlib.h>

typedef struct treenode{
	int data;
	struct treenode *left;
	struct treenode *right;
}treenode;

treenode* createNewNode(int data){
	treenode* newNode = malloc(sizeof(treenode));
	newNode->data = data; // or (*newNode).data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void Insert(treenode** root, int data){
	if (*root == NULL){
		*root = createNewNode(data);
	}
	else if(data <= *root->data){
		Insert(*root->left,data);
	} else{
		Insert(*root->right,data);
	}
}


int main(){
	
	treenode* root = NULL; //creates empty bst
	Insert(&root, 15);
	insert(&root, 20);	
	//int input[13] = {1,1,3,3,4,4,5,5,6,6,8,12};		
	return 0;
}
