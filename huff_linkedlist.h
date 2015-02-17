
typedef struct node{
	int freq;
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
linkedList* 	listInit(int freq, node* element);
linkedList* 	sort(linkedList* messy);


