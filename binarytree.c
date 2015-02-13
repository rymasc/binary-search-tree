#include <stdio.h>
#include <stdlib.h>

typedef struct treenode{
	int val;
	struct treenode *left;
	struct treenode *right;
}treenode;

void Insert(treenode** root, int data);
	if (*root == NULL){
		*root = createNewNode;
	}
	else if(data <= root->data){
		root->left = Insert(root->left,data);
	} else{
		root->right = Insert(root->right,data);
	}
	
}


treenode* createNewNode(int data){
	treenode* newNode = (*treenode)malloc(sizeof(treenode));
	newNode->data = data; // or (*newNode).data = data;
	newNode->left = NULL:
	newNode->right = NULL;
	return newNode;
}

int main(){
	
	treenode* root = NULL; //creates empty bst
	Insert(root, 15);
	insert(root, 20);	
	//int input[13] = {1,1,3,3,4,4,5,5,6,6,8,12};		
	return 0;
}
