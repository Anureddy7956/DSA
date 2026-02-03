// floor -> greatest value that is smaller than or equal to key
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
int floorBST(struct node *root , int key){
    int floor=-1;

    while(root!=NULL){
        if(root->data==key){
            return root->data;
        }
        if(key > root->data){
            floor=root->data;
            root=root->right;
    }
        else{
            root=root->left;
    }
}
    return floor;
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

    int key = 12;
    int result = floorBST(root, key);

    if (result != -1)
        printf("floor of %d is %d\n", key, result);
    else
        printf("floor does not exist\n");

return 0;

}
