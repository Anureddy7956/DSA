// Method 1 to create a three nodes in a list
#include<stdio.h>
#include<stdlib.h>
//define the structure of a node 
struct node {
    int data;
    struct node *next; // self referential structure
};

int main(){

struct node *list = malloc (sizeof(struct node));
list->data=777;
list->next=NULL;

struct node *current = malloc (sizeof(struct node));
current->data=666;
current->next=NULL;
list->next = current;

struct node *current2 = malloc(sizeof(struct node));
current2 -> data = 11;
current2 -> next = NULL;
current -> next = current2;
// created three pointers inefficient code

printf(" The data in the node : %d\n", list->data);
printf(" The data in the node : %d\n", current->data);
printf(" The data in the node : %d\n", current2->data);

return 0;

}
