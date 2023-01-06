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

struct node* deleteStart(struct node * head)
{
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node* deleteBetween(struct node * head, int ind)
{
    struct node* p = head;
    struct node* q = head->next;
    
    while(ind-1!=0){
        p= p->next;
        q= q->next;
        ind--;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node* deledteEnd(struct node * head)
{
    struct node* p = head;
    struct node* q = head->next;
    
    while(q->next!=NULL){
        p= p->next;
        q= q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

struct node* deleteValue(struct node * head, int data)
{
    struct node* p = head;
    struct node* q = head->next;    
    while(q->data!=data && q->next!=NULL){
        p= p->next;
        q= q->next;
    }
    if(q->data = data)
    {
        p->next = q->next;
        free(q);
    }
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
        printf("\nEnter a choice\n1.Delete the 1st element\n2.Delete the last\n3.Delete at the given index\n4.Delete the node by giving its data\nGive any other number to exit\n");
        int ch;
        scanf("%d", &ch); int d,idx;
    switch(ch)
    {

        case 1 :
                 head = deleteStart(head);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
        
        case 2: 
                 head = deledteEnd(head);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
                 
        case 3:  printf("Enter the index\n");
                 scanf("%d", &idx);
                 head = deleteBetween(head,idx);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
                 
        case 4:  printf("Enter the data that has to be deleted\n");
                 scanf("%d", &d);
                 head = deleteValue(head, d);
                 printf("Linked list:\n");
                 displayLink(head);
                 break;
        default:
                exit(0);
    }
    }
    return 0;
}

