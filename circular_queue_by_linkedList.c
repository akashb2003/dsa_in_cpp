#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
} * top = NULL, *rear = NULL;

int isFull()
{
    struct node * p = (struct node*)malloc(sizeof(struct node));
    if(p == NULL)
    return 1;
    return 0;
}

void enqueue(int data)
{
    struct node * p = (struct node*)malloc(sizeof(struct node));
    
    p->data = data;
    p->next = NULL;
    
    if(isFull())
    {
        printf("Queue overflow\n");
    }
    if(top ==NULL && rear == NULL)
    {
        top = rear = p;
        rear->next = top;
    }
    else
    {
        rear->next = p;
        rear = p;
        rear->next = top;
    }
}

void dequeue()
{
    struct node* p = top;
    if(top==NULL && rear == NULL)
    {
    printf("Queue underflow\n");
    }
    else if(top == rear)
    {
        printf("\n\n%d is dequeueed\n",top->data);
        top = rear = NULL;
        free(p);
    }
    else
    {
        struct node* p = top;
        struct node* q = top->next;
        int r = p->data;
        p->next = NULL;
        free(p);
        top = q;
        rear->next = top;
        printf("\n\n%d is dequeueed\n",r);
    }
}

void displaylist(struct node * top)
{
    struct node* p = top;
    if(top==NULL && rear == NULL)
    {
    printf("Queue underflow\n");
    }
    else
    {
    printf("\n\nCircular Queue is:\n");
    while(p->next!= top)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    printf("%d\n",rear->data);
    }
}

void peak()
{
    if(top==NULL && rear == NULL)
    printf("\nstack underflow\n");
    else
    printf("\npeak element is %d\n",top->data);
}

int main()
{
     while(1)
     {
         printf("\nEnter a choice\n1.enqueue\n2.dequeue\n3.display\n4.peak element\nEnter any other num to exit\n");
         int ch,data; scanf("%d", &ch);
         switch(ch)
         {
             case 1: printf("Enetr the data to be enqueueed\n");
                     scanf("%d",&data); enqueue(data); break;
             case 2: dequeue();break;
             case 3: displaylist(top);break;
             case 4: peak();break;
             default : exit(0);break;
         }
     }
    return 0;
}
