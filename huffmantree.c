#include <stdio.h>
#include <stdlib.h>
#include "huff_linkedlist.h"
#define false 0
#define true 1
typedef int bool;

/* Huffman A RAT SAT ON A CAR A5,_5,R2,T2,C1,N1,O1,S1 

							   18					
							/	  \
						/			\
					/					\
			     /						  \							
			   8							10	
			/    \						  /	  \
		  /		   \				     /	   \
	   /			   4			    /	    \
	4				/    \			   /	     \ 
  /	  \			2			2         /           \ 
 /	   \	  /   \       /   \		 /             \
2		2	1		1	1		1	5		        5
R		T	C		N	O		S	A				_	
  -----> --> ------> --> ------> --> -------------->	

*/


//leaf node is at edge of binary tree



node* build(node* n1, node* n2){
	int freq = n1->freq + n2->freq;
	node* builtNode = createNewNode(freq);
	if (n1->freq <= n2->freq){
		builtNode->left = n1;
		builtNode->right = n2;
	} else {
		builtNode->right = n1;
		builtNode->left = n2;
	}
	return builtNode;
}
	

int main(){
	int i, j, len;
	node* leaves[8];
	int freq[8] = {1,1,1,1,2,2,5,5};
	char sym[8] = {'C','N','O','S','R','T','A',' '};
	int leafLength = 8;


	return 0;
}
