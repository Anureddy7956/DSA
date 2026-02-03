// tuf    Ceil -> lowest node value greater than or equal to key
#include<stdio.h>
#include<stdlib.h>

// structure of BST node
struct node {
    int data;
    struct node *left;
    struct node *right;
};
// Function to create a new node
struct node* newNode(int value) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
// Insert a node into BST
struct node* insert(struct node* root, int value) {
    if (root == NULL)
        return newNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}
//fuction to find the ceil in the BST 
int ceilBST(struct node *root , int key){
    int ceil=-1;

    while(root!=NULL){
        if(root->data==key){
            return root->data;
        }
        if(key > root->data){
            root=root->right;
    }
        else{
            ceil=root->data;
            root=root->left;
    }
}
    return ceil;
}
  
int main() {
    struct node* root = NULL;

    // Creating BST
    root = insert(root, 20);
    insert(root, 10);
    insert(root, 30);
    insert(root, 5);
    insert(root, 15);
    insert(root, 25);
    insert(root, 35);

    int key = 34;
    int result = ceilBST(root, key);

    if (result != -1)
        printf("Ceil of %d is %d\n", key, result);
    else
        printf("Ceil does not exist\n");

return 0;

}
