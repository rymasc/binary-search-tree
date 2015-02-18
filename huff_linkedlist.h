
typedef struct node{
	int freq;
	int flag;
	struct node* left;
	struct node* right;
}node;

//used to store nodes in order
typedef struct linkedList{
	node* element;
	int index;
	struct linkedList* next;
}linkedList;

int numOfNodes;


node*			nodeInit(int freq); 
node* 			nodeFlag(node* n);	    	
linkedList* 	listInit(node* element);
linkedList* 	sort(linkedList* messy);


