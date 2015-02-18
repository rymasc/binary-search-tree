#include <stdio.h>
#include <stdlib.h>
#include "huff_linkedlist.h"
#define false 0
#define true 1
#define CHAR_SET_SIZE 8


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
	node* builtNode = nodeInit(freq);
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
	int i, j, k,len, psum, cond1, cond2, cond3;
	char c;
	float f;
	node* n;
	node* nodelist[CHAR_SET_SIZE];
	node* tmp[CHAR_SET_SIZE/2];
	int freq[CHAR_SET_SIZE] = {1,1,1,1,2,2,5,5};
	char sym[CHAR_SET_SIZE] = {'C','N','O','S','R','T','A',' '};

	for(i = 0; i<CHAR_SET_SIZE; i++){
		node* n = nodeInit(freq[i]);
		nodelist[i] = n;
		printf("nodelist[%d] = %d\n", i, nodelist[i]->freq);
	}
	len = (CHAR_SET_SIZE/2) - 1;
	
	//initialize tmp
	for (i = 0; i<CHAR_SET_SIZE/2; i++){
		node* n = nodeInit(0);
		n = nodeFlag(n);
	}
	psum =0;
	//Start building
	for (i=0; i<CHAR_SET_SIZE/2; i++){
		node* sum = nodeInit(0);
		sum->freq =  nodelist[2*i]->freq;
		sum->freq += nodelist[2*i+1]->freq;
		cond1 = (psum >= nodelist[2*i]->freq);
		cond2 = (psum >= nodelist[2*i+1]->freq);
		cond3 = (i==0);
		if (cond1 || cond2 || cond3){
			tmp[i] = sum;
		//	nodelist[2*i] = reset(nodelist[2*i]);
		//	nodelist[2*i+1] = reset(nodelist[2*i+1]);
			printf("tmp[%d] = %d\n",i,tmp[i]->freq);
			psum = sum -> freq;
		} else{
			printf("don't add dat shit\n");
		}

	}	
	return 0;
}
