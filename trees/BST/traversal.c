#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int value){
    struct node *newnode= malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct node *insert(struct node *root, int value ){
    if(root==NULL)
        return createnode(value);
    if(value < root->data)
        root->left=insert(root->left,value);
    if(value > root->data)
        root->right=insert(root->right,value);
return root;
}
// Inorder traversal
void inorder(struct node*root){
    if(root != NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
} 
//preorder traversal
void preorder(struct node*root){
    if(root != NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// postorder traversal
void postorder(struct node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
// search in BST
void search(struct node * root , int key){
    if(root==NULL){
        printf("key %d is not found",key);
            return ;
    }
    if(root->data==key){
          printf("key %d is found",key);
             return;
    }
    else if(key< root->data)
        search(root->left,key);
    else 
        search(root->right,key);
}
int main(){
    struct node *root = NULL;
    int choice , key;

    int values[] = {6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2};
    int n = 12;

    while (1) {
        printf("\n--- BST Menu ---\n");
        printf("1. Create BST\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search a key\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                root = NULL;
                for (int i = 0; i < n; i++)
                    root = insert(root, values[i]);
                printf("BST created successfully\n");
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 3:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 5:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(root, key);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}

