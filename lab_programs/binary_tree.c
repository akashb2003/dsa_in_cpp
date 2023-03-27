#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree* right;
    struct Tree* left;
} node;

node* newnode(int data)
{
    node* new = (node*)malloc(sizeof(node));
    new->right = NULL;
    new->left = NULL;
    new->data = data;
    return new;
}


node* add(node* root, int data)
{
    if(root ==NULL)
    return newnode(data);
    
    if(data< root->data)
    root->left = add(root->left, data);
    else
    root->right =  add(root->right, data);
    
    return root;
}

void inorder(node* root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}

void preorder(node* root)
{
    if(root!=NULL)
    {
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}

void postorder(node* root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
    }
}

int main()
{
    node* root = NULL;
    printf("enter num of nodes\n");
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter data :");
        scanf("%d", &data);
        root = add(root,data);
    }
    printf("\nInorder : ");
    inorder(root);
    printf("\npostorder : ");
    postorder(root);
    printf("\npreorder : ");
    preorder(root);

    return 0;
}

