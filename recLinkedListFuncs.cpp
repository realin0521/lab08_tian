#include "linkedList.h"
#include "linkedListFuncs.h"
int recursiveSum(Node* head) {
	if(head->next==NULL){
		return head->data;
	}
	else{
		return head->data + recursiveSum(head->next);
	}
}

int recursiveLargestValue(Node* head) {
	int value = head->data;
	int next;
	if(head->next==NULL){
		return value;
	}
	else{
		next=recursiveLargestValue(head->next);
	}
	if(value>next){
		return value;
	}
	else{
		return next;
	}
}
