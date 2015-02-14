#include <stdio.h>
#include <stdlib.h>
#define false 0
#define true 1
typedef int bool;

typedef struct treenode {
	int data;
	struct treenode *left;
	struct treenode *right;
} treenode;

treenode* createNewNode(int data){
	treenode* newNode = malloc(sizeof(treenode));
	newNode->data = data; // or (*newNode).data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}


treenode* insert(treenode* root, int data){
	if (root == NULL){
		root = createNewNode(data);
	}
	else if(data <= root->data){
		root->left = insert(root->left, data);
	} else{
		root->right = insert(root->right, data);
	}
	return root;
}

bool search(treenode* root, int data){
	if(root==NULL) return false;
	if(root->data == data) return true;
	else if(data <= root->data) return search(root->left, data);
	else return search(root->right, data);
}


/*
void insert(treenode** root, int data){
	if (*root == NULL){
		*root = createNewNode(data);
	}
	else if(data <= (*root)->data){
		insert(&(*root)->left,data);
	} else{
		insert(&(*root)->right,data);
	}
}
*/

int main(){
	treenode* root = NULL; //creates empty bst
	root = insert(root, 15);
	root = insert(root, 20);
	printf("root.data = %d", root->data);
	if (search(root, 15)) printf("15 is in binary tree\n");
	//int input[13] = {1,1,3,3,4,4,5,5,6,6,8,12};		
	return 0;
}
