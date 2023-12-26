#include"stdio.h"
#include"stdlib.h"
typedef struct node{
	int data;
	struct node* temp;
} node;
node* deletee(node *head){
	if(head==NULL){
		printf("\nNo node to delete.");
		return head;
	}
	node* p1=head;
	node* p2=head;
	while(p1->next!=NULL){
		p2=p1;
		p1=p1->next;
	}
	p2->next=NULL;
	return head;
}
int main(){
	node* head;
	head=(node*)malloc(sizeof(node));
	head=NULL;
	char ch;
	printf("\t\tLinked List");
	printf("\n\tFor deletion \t---- d");
	printf("\n\nEnter your choice : ");
	scanf("%c",&ch);
	switch(ch){
		case 'd':
			head=deletee(head);
			break;
		default:
			printf("\n\tInvalid Entry.");
			break;
	}
}
