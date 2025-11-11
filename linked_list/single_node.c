// program to create a single node in a list
#include<stdio.h>
#include<stdlib.h>
//define the structure of a node 
struct node {
    int data;
    struct node *next; // self referential structure
};

int main(){
struct node *list = NULL;
list = (struct node*) malloc (sizeof(struct node));

list->data=777;
list->next=NULL;

printf(" the data in the node : %d\n",list->data);

return 0;
}
