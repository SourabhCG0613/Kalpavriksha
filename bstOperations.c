#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* left; 
    struct node* right;
} node;

node* insert(int value, node *tnode)
{
    if(tnode == NULL){
        tnode = (node*)malloc(sizeof(node));
        tnode->value = value;
        tnode->left = tnode->right = NULL ;
        return tnode;
    }
    
    if(value <= tnode->value){
        tnode->left = insert(value, tnode->left);
    }
    else if (value > tnode->value){
        tnode->right = insert(value, tnode->right);
    }  
    return tnode;
}

node* search(node* root, int key) {
    if (root == NULL || root->value == key) {
        return root;
    } else if (key < root->value) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

void display(node* tnode)
{
   if(tnode==NULL)
   {
       return;
   }
   display(tnode->left);
   printf("%d ", tnode->value);
   display(tnode->right);
}

int main() {
    int i, num, value;
    node *root = NULL;
    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("%d",&value);
        root = insert(value, root);
    }
    int key;
    display(root);
    printf("\nEnter Key : ");
    scanf("%d",&key);
    node* nodeToFind = search(root, key);
    if (nodeToFind != NULL) {
        printf("Node found with data %d\n", nodeToFind->value);
    } else {
        printf("Node not found\n");
    }
    return 0;
}