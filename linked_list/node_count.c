#include<stdio.h>
#include<stdlib.h>
//define the structure of a node 
struct node {
    int data;
    struct node *link; // self referential structure
};
void count_of_node(struct node *head){
	int count=0;
	if(head==NULL)
		printf("Linked list is empty");
	struct node *ptr=NULL;
	ptr = head;
	
	while(ptr!=NULL){
		count++;
		ptr = ptr->link;
	}
	printf("%d\n",count);
}
int main(){

struct node *head = malloc (sizeof(struct node));
head->data=777;
head->link=NULL;

struct node *current = malloc (sizeof(struct node));
current->data=666;
current->link=NULL;
head->link = current;

current = malloc(sizeof(struct node));
current -> data = 11;
current -> link = NULL;
head->link->link = current;

count_of_node(head);

return 0;
}












