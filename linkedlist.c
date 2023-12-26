#include"stdio.h"
#include"stdlib.h"
typedef struct node{
	int data;
	struct node* temp;
} node;
node* insert(node *head){
	node* temp;
	temp=(node*)malloc(sizeof(node));
	int a;
	printf("Enter the value to be inserted : ");
	scanf("%d",&a);
	temp->data=a;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		return head;
	}
	node* p1=head;
	while(p1->next!=NULL){
		p1=p1->next;
	}
	p1->next=temp;
	return head;
}
int main(){
	node* head;
	head=(node*)malloc(sizeof(node));
	head=NULL;
	char ch;
	printf("\t\tLinked List");
	printf("\n\tFor insertion \t---- i");
	printf("\n\nEnter your choice : ");
	scanf("%c",&ch);
	switch(ch){
		case 'i':
			head=insert(head);
			break;
		default:
			printf("\n\tInvalid Entry.");
			break;
	}
}
