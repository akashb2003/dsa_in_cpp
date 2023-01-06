#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node* displayLink(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node* addAtStart(struct node * head, int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node* inBetween(struct node * head, int data, int ind)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    
    while(ind-1!=0){
        p= p->next;
        ind--;
    }
    ptr->next=p->next;
    p->next = ptr;
    return head;
}

struct node* addEnd(struct node * head, int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node*p = head;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next=NULL;
    return head;
}

struct node* afterNode(struct node * head, int data, int ind)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    
    while(ind-1!=0){
        p= p->next;
        ind--;
    }
    ptr->next=p->next;
    p->next = ptr;
    return head;
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
    printf("Linked list:\n");
    displayLink(head);
    
    while(1)
    {
        printf("\nEnter a choice\n1.Insert at 1st position\n2.Insert at the end\n3.Insert at the given index\n4.Insert after the node\nAny other number to exit\n");
        int ch;
        scanf("%d", &ch); int d,idx;
    switch(ch)
    {

        case 1 : printf("Enter the data\n");
                 scanf("%d",&d); head = addAtStart(head, d);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
        
        case 2: printf("Enter the data\n");
                 scanf("%d",&d); 
                 head = addEnd(head, d);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
                 
        case 3: printf("Enter the data and the index\n");
                 scanf("%d",&d); scanf("%d", &idx);
                 head = inBetween(head,d,idx);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
                 
        case 4: printf("Enter the data and the node number\n");
                 scanf("%d",&d); scanf("%d", &idx);
                 head = afterNode(head, d, idx);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
        default:
                exit(0);
    }
    }
    return 0;
}

