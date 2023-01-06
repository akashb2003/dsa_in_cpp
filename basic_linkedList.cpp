#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data; struct node * next;
}

displayLink(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* first = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = first;

    first->data = 11;
    first->next = second;
    
    second->data = 111;
    second->next = third;
    
    third->data = 1111;
    third->next = NULL;
    
    displayLink(head);
    
    return 0;
}

