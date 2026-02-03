#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* newnode(int val) {
    struct TreeNode *temp = malloc(sizeof(struct TreeNode));
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if (root == NULL)
        return newnode(val);    
    
    if (val < root->val)
        root->left = insertIntoBST(root->left, val);
    else 
        root->right = insertIntoBST(root->right, val);

    return root;
}

void display(struct TreeNode* root) {
    if (root == NULL) {
        printf("(empty)");
        return;
    }
    
    printf("Root: %d\n", root->val);
    if (root->left) printf("Left: %d\n", root->left->val);
    else printf("Left: NULL\n");
    if (root->right) printf("Right: %d\n", root->right->val);
    else printf("Right: NULL\n");
}

int main() {
    struct TreeNode *root = NULL;
    
    root = insertIntoBST(root, 50);
    insertIntoBST(root, 30);
    insertIntoBST(root, 70);
    insertIntoBST(root, 80);
    
    printf("Tree structure:\n");
    display(root);
    
    return 0;
}
